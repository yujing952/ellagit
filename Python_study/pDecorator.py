#!/usr/bin/python3
# -*- coding: utf-8 -*-


def makeBold(func):
    print('---a---')
    def inner():
        print('---1---')
        return '<b>' + func() + '</b>'
    return inner


def makeItalic(func):
    print('---b---')
    def inner():
        print('---2---')
        return '<i>' + func() + '</i>'
    return inner 


@makeBold
@makeItalic
def testing1():
    print('---c---')
    print('---3---')
    return 'python decorator'


def w_say(func):
    def inner(name):
        print('w_say inner called...')
        func(name)
    return inner 


@w_say
def hello(name):
    print('hello,', name)
        

def deco(func):
    def inner(*args, **kwargs):
        print('deco inner called...')
        ret = func(*args, **kwargs)
        return ret
    return inner 


@deco
def add(a, b):
    print('%d + %d = %d' % (a, b, a+b))


@deco
def add2(a, b, c):
    print('%d + %d + %d = %d' % (a, b, c, a+b+c))


@deco
def testing2():
    print('this is testing func')
    return 'hello'


class Test(object):
    def __init__(self, func):
        print('test init')
        print('func name is %s ' % func.__name__)
        self.__func = func

    def __call__(self, *args, **kwargs):
        print('装饰器中的功能')
        self.__func()


@Test
def testing3():
    print('this is testing3')


if __name__ == '__main__':
    print('\n-----running result-----')
    hello('lucky')
    add(1, 2)
    add2(3, 4, 5)
    ret1 = testing2()
    print(ret1)
    ret2 = testing1()
    print(ret2)
