#! /usr/bin/python3

#-----hello function-----
def hello():
    print("hello,world!")

#-----max function-----
def max(a,b):
    if a > b:
        return a
    else:
        return b
#-----area function-----
def area(len,wide):
    return len * wide
       

hello()

a = 4
b = 5
print(max(a,b))
print(area(a,b))
