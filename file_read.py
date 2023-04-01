#! /usr/bin/python3

#open a file
#  /c/Users/niuyu/Desktop/ellagit
f = open("C:/Users/niuyu/Desktop/ellagit/testing.txt","r")

# read this file
str = f.read()
print(str)

#close this opened file
f.close()