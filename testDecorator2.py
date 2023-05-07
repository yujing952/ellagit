#!/usr/bin/python3
import time


def deco01(func):
    def wrapper(*args, **kwargs):
        print("this is deco01")
        startTime = time.time()
        func(*args, **kwargs)
        endTime = time.time()
        msecs = (endTime - startTime)*1000
        print("time is %d ms" % msecs)
        print("deco01 end here")
    return wrapper


def deco02(func):
    def wrapper(*args, **kwargs):
        print("this is deco02")
        func(*args, **kwargs)
        print("deco02 end here")
    return wrapper


@deco01
@deco02
def func(a,b):
    print("hello, here is a func for add:")
    time.sleep(1)
    print("result is %d" % (a+b))


def dec1(func):
    print("1111")
    def one():
        print("2222")
        func()
        print("3333")
    return one


def dec2(func):
    print("aaaa")
    def two():
        print("bbbb")
        func()
        print("cccc")
    return two


@dec1
@dec2
def test():
    print("test test")


if __name__ == "__main__":
    func(3,4)
 #  test()



