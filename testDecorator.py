#!/usr/bin/python3
from functools import reduce
import time

def test_var_args(f_arg,*args):
    print("first normal arg:",f_arg)
    for arg in args:
        print("another arg through *args:", arg)

def greet_me(**kwargs):
    for key,value in kwargs.items():
        print("{0} == {1}".format(key,value))

def test_args_kwargs(arg1,arg2,arg3):
    print("arg1:",arg1)
    print("arg2:", arg2)
    print("arg3:", arg3)

'''
这两个是python中的可变参数。*args表示任何多个无名参数，它是一个tuple；**kwargs表示关键字参数，它是一个dict。
并且同时使用*args和**kwargs时，必须*args参数列要在**kwargs前，
像foo(a=1, b='2', c=3, a', 1, None, )这样调用的话，会提示语法错误“SyntaxError: non-keyword arg after keyword arg”。
'''
def foo(*args, **kwargs):
    print("args = ", args)
    print("kwargs = ", kwargs)
    print("-----------------")

def log(func):
    def inner(*args, **kwargs):
        print("call" + func.__name__ + "()...")
        return func(*args, **kwargs)
    return inner

@log
def factorial(n):
    return reduce(lambda x,y: x*y,range(1, n+1))

@log
def add(x,y):
    return x+y

def test_for(arr):
    if len(arr) <= 0:
        return 0
    out = 0
    for i in arr:
        out += i
    return out

def test_reduce(arr):
    out = reduce(lambda x,y: x+y,arr)
    return out


if __name__ == "__main__":
    test_var_args('yasoob','python','eggs','test')

    print("-------2--------")
    greet_me(name = "hello",age = 6)

    print("-------3--------")
    args =("two", 3, 5)
    test_args_kwargs(*args)
    print("------4--------")
    kwargs = {"arg3":3, "arg2": "two", "arg1":5}
    test_args_kwargs(**kwargs)

    print("------5--------")
    foo(1,2,3,4)
    foo(a=1,b=2,c=3)
    foo(1,2,3,4,a=1,b=2,c=3)
    foo('a',1,None,a=1,b='2',c=3)

    print("------6--------")
    print(factorial(10))
    print(add(1,2))

    print("------7--------")

    list1 = [i for i in range(100000)]
    t1 = time.perf_counter()
    test_for(list1)
    t2 = time.perf_counter()
    test_reduce(list1)
    t3 = time.perf_counter()
    print("the time cost (for): ", (t2-t1))
    print("the time cost(reduce): ", (t3-t2))

