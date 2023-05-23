#!/usr/bin/env python3
# _*_ coding:utf-8 _*_


n = 0
while n < 10:
    n = n + 1
    if n % 2 == 0:
        continue
    print(n, end=' ')
print('\n')


i = 0
while i <= 10:
    i = i + 1
    if i > 5:
        break
    print(i, end=', ')
print('\n')

m = 1
while m <= 10:
    print(m,end=', ')
    m = m + 1
print('end')


print('begin to test...')


def fib(length):
    var, a, b = 0, 0, 1
    while var < length:
        yield b
        a, b = b, a + b
        var += 1


g = fib(6)
while True:
    try:
        x = next(g)
        print('g:', x)
    except StopIteration as e:
        print('generator return value:', e.value)
        break
    finally:
        print("running ok")


