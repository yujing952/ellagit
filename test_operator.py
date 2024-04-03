#! /usr/bin/python3
import pytest

a = 10
b = 20
c = 2
datalist = [1,2,3,4,5]

if(a in datalist):
    print("the variable a is at this given datalist ")
else:
    print("the variable a is not at this given datalist ")
    
    
if(b not in datalist):
    print("the variable b is not at this given datalist ")
else:
    print("the variable b is at this given datalist ")

if(c in datalist):
    print("the variable c is at this given datalist ")
else:
    print("the variable c is not at this given datalist ")