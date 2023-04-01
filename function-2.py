#! /usr/bin/python3

# define a function
def printme(str1):
        print(str1)
        return

def change(a):
        print(id(a))
        a = 10
        print(id(a))
    

# printme("hello,how are you?")
# printme("fine, thanks.")

a = 1
print(id(a))
change(a)

