#! /usr/bin/python3

# ----------------------------
# decorator case 1
# ----------------------------

def w1(func):
    print("the decorator is decorating...")

    def inner():
        print("...verifying...")
        func()
    return inner


@w1
def f1():
    print("f1 called")


@w1 
def f2():
    print("f2 called")
    
# f1()
# f2()

# ----------------------------
# decorator case 2
# ----------------------------


def makeBold(fun):
    print("---a---")

    def inner():
        print("---1---")
        return '<b>' + fun() + '</b>' 
    return inner


def makeItallic(fun):
    print('---b---')

    def inner():
        print('---2---')
        return '<i>' + fun() + '</i>'
    return inner


@makeBold
@makeItallic
def testing():
    print('---c---')
    print('---3---')
    return 'hello python decorator'

# ret = testing()
# print(ret)


# ----------------------------
# decorator case 3
# ----------------------------

def w_add(func):
    def inner(*args, **kwargs):
        print('add inner called')
        func(*args,**kwargs)
    return inner

@w_add
def add(a,b):
    print('%d + %d = %d' % (a, b, +b))


@w_add
def add2(a,b,c):
    print('%d + %d + %d = %d' % (a, b, c, a+b+c))
    
# add(2,4)
# add2(2,3,5)


# ----------------------------
# decorator case 4
# ----------------------------


def w_say(func):
    """
     如果原函数有参数，那闭包函数必须保持参数个数一致，并且将参数传递给原方法    
     """
    def inner(name):
        """
        如果被装饰的函数有行参，那么闭包函数必须有参数
        :param name:
        :return:
        """
        print('say inner called')
        str = func(name)
        return str
        
    return inner


@w_say
def hello(name):
    print('hello ' + name)
    return 'come on'


# ret = hello('yaoyao')
# print('the ret value is ',ret)


# ----------------------------
# decorator case 5
# 带参数的装饰器就是在原闭包的基础上又加了一层闭包
# ----------------------------

def func_args(vistor='chenqi'):
    def w_test_log(func):
        def inner():
            print('recording log,vistor is %s' % vistor)
            func()
        return inner
    return w_test_log

# 带有参数的装饰器能够起到在运行时，有不同的功能
# 先执行func_args('wangcai')，返回w_test_log函数的引用
# @w_test_log
# 使用@w_test_log对test_log进行装饰


@func_args('ella')
def test_log():
    print('this is test log')


# test_log()

# ----------------------------
# decorator case 6
# 通用装饰器
# ----------------------------


def w_test(func):
    def inner(*args, **kwargs):
        ret = func(*args, **kwargs)
        return ret
    return inner


@w_test
def test0():
    print('test 0 is called')


@w_test
def test1():
    print('test 1 is called')
    return 'python study'


@w_test
def test2(*var, **kw):
    print('this test2 called value is:', var, kw)


test0()
ret1 = test1()
print('the return from test1: %s' % ret1)
test2((6, 7, 8), name='hello')


# ----------------------------
# decorator case 7
# 类装饰器
# ----------------------------


class TestClass(object):
    def __init__(self, func):
        print('test init')
        print('the func name is %s ' % func.__name__)
        self.__func = func
    
    def __call__(self, *args, **kwargs):
        print('the function of decorator')
        self.__func()


@TestClass
def test3():
    print('this is test3 func')
    

test3()
