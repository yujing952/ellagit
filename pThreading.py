#!/usr/bin/python3
# -*- coding:utf-8 -*-

import threading, time


def add(n):
    he = 0
    while he <= n:
        he += 1
    print(f'sum:{he}')


if __name__ == '__main__':
    start = time.time()
 #   add(100000000)
    n = 100000000
    t1 = threading.Thread(target=add,args=[n/2])
    t2= threading.Thread(target=add, args=[n/2])
    t1.start()
    t2.start()
    t1.join()
    t2.join()
    print('run time: %s' % str(time.time() - start))
