#!/usr/bin/python3

import sys

# Fibonacci series


def Fib1():
    a, b = 0, 1
    while b < 20:
        print(b, end=' ')
        a, b = b, a+b


def Fib2():
    x, y = 0, 1
    for i in range(10):
        print(x, end=',')
        x, y = y, x+y


"""
生成器是一个返回迭代器的函数，只能用于迭代操作，更简单点理解生成器就是一个迭代器。
在调用生成器运行的过程中，每次遇到 yield 时函数会暂停并保存当前所有的运行信息，
返回 yield 的值, 并在下一次执行 next() 方法时从当前位置继续运行
"""


def Fibn(n):
    a, b, count = 0, 1, 0
    while True:
        if count > n:
            return
        yield a       # yield使用
        a, b = b, a+b
        count += 1


f = Fibn(10)            # 调用一个生成器函数，返回的是一个迭代器对象
print('f is ', f)       # f is  <generator object Fibn at 0x000001605ABBD380>
while True:
    try:
        print(next(f), end=' ')
    except StopIteration:
        sys.exit()



