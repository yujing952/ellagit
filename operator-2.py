#! /usr/bin/python3

num = int(input("please input a digit:"))

if num%2 == 0:
    if num%3 == 0:
        print("this digit can divide 2 and 3")
    else:
        print("this digit can divide 2, but not 3")
else:
    if num%3 == 0:
         print("this digit can divide 3, but not 2")
    else:
        print("this digit can not divide 2 or 3")