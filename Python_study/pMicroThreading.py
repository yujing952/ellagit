#!/usr/bin/python3
import time


def printInfo(arg1, *args):
    print("the output:")
    print(arg1)
    print(args)


def printInfo2(arg1, **kwargs):
    print("the output:")
    print(arg1)
    print(kwargs)


def A():
    while True:
        print('---a---')
        yield
        time.sleep(1)


def B(obj):
    while True:
        print('---b---')
        next(obj)
        time.sleep(1)


if __name__ == '__main__':
    a = A()
    B(a)


