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
while i <= 100:
    i = i + 1
    if i > 10:
        break
    print(i, end=', ')
print('\n')

m = 1
while m <= 100:
    print(m,end=', ')
    m = m + 1
print('end')

