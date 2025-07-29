#!/usr/bin/python3
def decorator1(func):
    def wrapper():
        print("Decorator 1")
        func()

    return wrapper


def decorator2(func):
    def wrapper():
        print("Decorator 2")
        func()

    return wrapper


@decorator1
@decorator2
def say_hello():
    print("Hello!")


print("-----case-1-----")
say_hello()


# ---------------case-2---------------------


def deco1(func):
    def inner():
        print('verifying permission...')
        func()

    return inner


@deco1
def func1():
    print('func1 called')


@deco1
def func2():
    print('func2 called')


print("-----case-2-----")
func1()
func2()


# ---------------case-3---------------------


def make_bold(func):
    print('-----a-----')

    def inner():
        print('-----1-----')
        return '<b>' + func() + '</b>'

    return inner


def make_italic(func):
    print('-----b-----')

    def inner():
        print('-----2-----')
        return '<i>' + func() + '</i>'

    return inner


@make_bold
@make_italic
def test2():
    print('-----c-----')
    print('-----3-----')
    return 'python decorator'


print("-----case-3-----")
ret = test2()
print(ret)
