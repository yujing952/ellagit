#! /usr/bin/python3
import sys

#-------------generator--------------
print("\n--------------iterator---------------")
class MyNumber:
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
    
myclass = MyNumber()
myiter = iter(myclass)

for x in myiter:
    print(x, end = " ")
    
    
#-------------generator--------------
print("\n\n--------------generator---------------")

def fibonacci(n): #生成器函数 - 斐波那契
     a,b,counter = 0,1,0
     while True:
         if (counter > n):
             return
         yield a
         a,b = b, a+b
         counter += 1

f = fibonacci(10)  # f是一个迭代器，由生成器返回生成

while True:
    try:
        print(next(f),end=' ')
    except StopIteration:
        sys.exit()
               
    