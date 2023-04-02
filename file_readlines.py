#! /usr/bin/python3

#open a file
# Linux path: /c/Users/niuyu/Desktop/ellagit/testing.txt
# Windown path: C:/Users/niuyu/Desktop/ellagit/testing.txt  
f = open("C:/Users/niuyu/Desktop/ellagit/testing.txt","r")


#read all rows from this file
str_all_ines = f.readlines()
print("str_all_ines:\n", str_all_ines)

#close this opened file
f.close()
