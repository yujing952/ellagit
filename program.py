#! /usr/bin/python3

# Fibonacci series
# the sum of two digits can confirm the next digit
a,b = 0,1
while b <10:
    print(b,end=',')
    a,b = b, a+b

# for loop
print("\n==============")    
n = 10
print(range(n))
x,y = 0,1
for i in range(n):
    print(y,end='  ')
    x,y = y, x+y
    