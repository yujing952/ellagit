#! /usr/bin/python3

#open a file
# Linux path: /c/Users/niuyu/Desktop/ellagit/testing.txt
# Windown path: C:/Users/niuyu/Desktop/ellagit/testing.txt  
f = open("C:/Users/niuyu/Desktop/ellagit/testing.txt","r+")

#read a single row from this file
str_one_line = f.readline()
print("str_one_line:\n",str_one_line)

#close this opened filec
f.close()
