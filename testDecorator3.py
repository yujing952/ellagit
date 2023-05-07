#!/usr/bin/python3

def w_test(func):
    def inner():
        print("w_test inner start")
        str = func()
        print("w_test inner end")
        return str
    return inner

@w_test
def test():
    print("this is test func")
    return "hello"

def func_args(pre="xiaoqiang"):
    def w_test_log(func):
        def inner():
            print("recording log: visitor is %s" % pre)
            func()
        return inner
    return w_test_log

# 带有参数的装饰器能够起到在运行时，有不同的功能

# 先执行func_args('wangcai')，返回w_test_log函数的引用
# @w_test_log
# 使用@w_test_log对test_log进行装饰


@func_args("wangcai")
def test_log():
    print("this is test log")


def w_deco(func):
    def inner(*args, **kwargs):
        ret = func(*args, **kwargs)
        return ret
    return inner


@w_deco
def testing():
    print("testing called")


@w_deco
def testing1():
    print("testing1 called")
    return "python"

@w_deco
def testing2(a):
    print("testing2 called and value is %d" % a)


class Test(object):
    def __init__(self,func):
        print("test init")
        print("func name is %s" % func.__name__)
        self.__func = func

    def __call__(self, *args, **kwargs):
        print("decorator function")
        self.__func()


@Test
def test0():
    print("this is test0 function")


if __name__ == "__main__":
    ret = test()
    print("ret value is",ret)
    print("-------2--------")
    test_log()
    print("-------3--------")
    testing()
    t1 = testing1()
    print("testing2 return: ", t1)
    testing2(8)
    print("-------4--------")
    test0()
