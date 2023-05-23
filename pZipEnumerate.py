#!/usr/bin/python3
# _*_ coding: utf-8 _*_


# 注意到Iterator是惰性计算的序列，所以我们可以用Python表示“全体自然数”，
# “全体素数”这样的序列，而代码非常简
def _odd_iter():
    n = 1
    while True:
        n = n + 2
        yield n


def _not_divisible(n):
    return lambda x: x % n > 0


def primes():
    yield 2
    it = _odd_iter()
    while True:
        n = next(it)
        yield n
        it = filter(_not_divisible(n), it)


for i in primes():
    if i < 100:
        print(i, end=', ')
    else:
        break
