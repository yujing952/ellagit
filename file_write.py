#! /usr/bin/python3

#open a file
# Linux path: /c/Users/niuyu/Desktop/ellagit/testing.txt
# Windown path: C:/Users/niuyu/Desktop/ellagit/testing.txt  
f = open("C:/Users/niuyu/Desktop/ellagit/testing.txt","+a")

#write this file
comments = input("please input your comments:")

#need transfer string from any style
s = str(comments)

n = f.write(s)
f.write("\n")

#close this opened file
f.close()

print("n=", n)
