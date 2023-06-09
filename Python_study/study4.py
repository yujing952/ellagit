#!/usr/bin/python3
# -*- coding: utf-8 -*-

import sys

def fib1(n):
    i,a,b = 0,0,1
    while i < n:
        print(b, end=' ')
        a,b = b,a+b
        i += 1

def fib2(n):
    a,b = 0,1
    for i in range(n):
        print(b, end=' ')
        a,b = b,a+b

def fib3(n):
    i,a,b = 0,0,1
    while True:
        if i > n:
            return
        yield b 
        a,b = b,a+b
        i += 1
        
class myNumbers:
    def __iter__(self):
        self.a = 1
        return self
    
    def __next__(self):
        if self.a <= 20:
            x = self.a
            self.a += 1
            return x
        else:
            raise StopIteration

def printInfo(arg1,*vartuple):
    print("output:")
    print(arg1,vartuple)
    

if __name__ == '__main__':
    
    '''
    f = fib3(10)
    print(f)
    while True:
        try:
            print(next(f), end=' ')
        except StopIteration:
            sys.exit()
    '''
    printInfo(1)
    printInfo(7,8,9,0)
    