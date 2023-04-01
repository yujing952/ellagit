#! /usr/bin/python3
import sys

#python3推导式
names = ['Bob','Tom','Alice','Jerry','Wendy']
new_names = [name.upper() for name in names if len(name)>3]
print("new_name:",new_names)

#=========迭代器和生成器==============
print("\n==========iterator and generator=========")


list1 = [1,4,5,6]
iter1 = iter(list1)   # create iterator object 创建迭代器对象
while True:
    try:
        print(next(iter1),end=' ')
    except StopIteration:
        sys.exit()
        
        