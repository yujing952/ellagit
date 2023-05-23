#!/usr/bin/python3
# _*_ coding: utf-8 _*_

import time
import functools

"""
def count():
    fs = []
    for i in range(1, 4):
        def f():
            return i*i
        fs.append(f)
    return fs


# f1, f2, f3 = count()
f1, f2, f3 = count()

print('f1 =', f1)
print('f2 =', f2)
print('f3 =', f3)

f4 = count()
print('f4 =', f4)



def create(pos=None):
    if pos is None:
        pos = [0, 0]

    def go(direction, step):
        new_x = pos[0] + direction[0] * step
        new_y = pos[1] + direction[1] * step

        pos[0] = new_x
        pos[1] = new_y

        return pos

    return go


player = create()
print(player([1, 0], 10))
print(player([0, 1], 20))
print(player([-1, 0], 10))
"""


def metric(fn):
    @functools.wraps(fn)
    def inner(*args, **kwargs):
        start = time.time()
        ret = fn(*args, **kwargs)
        end = time.time()
        t = end - start
        print('%s executed in %s ms' % (fn.__name__, t))
        return ret
    return inner


@metric
def fast(x, y):
    time.sleep(0.0012)
    return x + y


@metric
def slow(x, y, z):
    time.sleep(0.1234)
    return x * y * z


f = fast(11, 22)
s = slow(11, 22, 33)
if f != 33:
    print('测试失败!')
elif s != 7986:
    print('测试失败!')


def comm(txt='hello'):
    def dec(func):
        @functools.wraps(func)
        def inner(*args, **kwargs):
            print('%s' % txt)
            ret = func(*args, **kwargs)
            return ret
        return inner
    return dec


@comm()
def ff1():
    pass


@comm('execute')
def ff2():
    pass


ff1()
ff2()
