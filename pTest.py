#! /usr/bin/python3
from typing import Iterable, Iterator


class MyList:
    def __init__(self, length: int):
        self.list = [i for i in range(length)]
        self.cursor = 0
        self.length = length

    def __iter__(self):
        return self

    def __next__(self):
        if self.cursor < self.length:
            self.cursor += 1
            return self.cursor
        else:
            exit(1)

    def __repr__(self) -> str:
        return f"MyList({self.length}):{self.list}"


'''
x = MyList(10)
print(iter(x))
print(next(x))
print(next(x))
print(next(x))
print('----------')
for j in x:
    print(j, end=', ')
'''
# -----------test-1---------------


class B(object):
    def __next__(self):
        raise StopIteration

    def __iter__(self):
        return None


class A(object):
    def __iter__(self):
        return B()


'''
b = B()
a = A()
print(isinstance(a, Iterable))
print(isinstance(a, Iterator))
print(isinstance(b, Iterable))
print(isinstance(b, Iterator))
'''
# -----------test-2---------------


class MyRange(object):
    def __init__(self, end):
        self.start = 0
        self.end = end

    def __iter__(self):
        return self

    def __next__(self):
        if self.start < self.end:
            ret = self.start
            self.start += 1
            return ret
        else:
            raise StopIteration


'''
r = MyRange(5)
print(isinstance(r, Iterable))
print(isinstance(r, Iterator))

for i in r:
    print(i, end=' ')
'''
# -----------test-3---------------


class Student:
    __instance = None

    def __new__(cls, *args, **kwargs):
        if not cls.__instance:
            cls.__instance = object.__new__(cls)
        return cls.__instance

    def sleep(self):
        print('sleeping ...')


'''
stu1 = Student()
stu2 = Student()
print(id(stu1), id(stu2))
print(stu1 is stu2)
'''
# -----------test-4---------------


class ClsDeco:
    def __init__(self, func):
        self.func = func

    def __call__(self, *args, **kwargs):
        print(f'Running {self.func.__name__}')
        self.func()
        print('End...')


@ClsDeco
def foo():
    print('do something...')

# foo()


# -----------test-5---------------


def deco(func):
    print('the decorator begin to decorate...')

    def inner():
        print('verifying ... ')
        func()
    return inner


@deco
def test():
    print('testing... ')


# test()


# -----------test-6---------------

def makeBold(fun):
    print('--------a---------')

    def inner():
        print('--------1---------')
        return '<b>' + fun() + '</b>'
    return inner


def makeItalic(fun):
    print('--------b---------')
    
    def inner():
        print('--------2---------')
        return '<i>' + fun() + '</i>'
    return inner


@makeBold
@makeItalic
def test():
    print('--------c---------')
    print('--------3---------')
    return 'python decorator'


'''
ret = test()
print(ret)
'''

# -----------test-7---------------


def w_say(func):
    def inner(name):
        print('inner called')
        func(name)
    return inner


@w_say
def hello(name):
    print('hello, ' + name)


# hello('Tom')

# -----------test-8---------------

def deco_add(func):
    def inner(*args, **kwargs):
        print('add inner called')
        func(*args, **kwargs)

    return inner


@deco_add
def add(a,b):
    print('%d + %d = %d' % (a, b, a+b))


@deco_add
def add2(a, b, c):
    print('%d + %d + %d = %d' % (a, b, c, a+b+c))


'''
add(2, 3)
add2(1, 3, 5)
'''


# -----------test-9---------------

def w_test(func):
    def inner():
        print('w_test inner called start')
        re = func()
        print('w_test inner called end')
        return re
    return inner


@w_test
def testing():
    print('this is test fun')
    return 'hello'


'''
print('testing 9')
ret = testing()
print(ret)
'''


def func_args(pre='miaowing'):
    def w_test_log(func):
        def inner():
            print(' recording log, the visitor is %s' % pre)
            func()
        return inner
    return w_test_log


@func_args('ella')
def test_log():
    print('this is test log')


# test_log()

def comm_deco(func):
    def inner(*args, **kwargs):
        print('comm_deco inner called')
        ret = func(*args, **kwargs)
        return ret
    return inner


@comm_deco
def testing1():
    print('testing1: no para, no return')


@comm_deco
def testing2(i):
    print('the value is %d' % i)


@comm_deco
def testing3():
    print('return a string')
    return 'decorator'


testing1()
testing2(10)
t3 = testing3()
print(t3)


# -----------test-10---------------
print('-----------test-10---------------')


class Test(object):
    def __init__(self, func):
        print('test init')
        print('func name is %s ' % func.__name__)
        self.__func = func

    def __call__(self, *args, **kwargs):
        print('the decorator function')
        self.__func()


@Test
def testing4():
    print('this is testing3 func')


testing4()