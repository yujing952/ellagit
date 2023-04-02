#!/usr/bin/python3

sites = {'google','taobao','runoob','facebook','zhihu','baidu','taobao'}
#output this sites, and the repeated number can be dropped automatically
print(sites)

#verify the number
if 'runoob' in sites:
    print("runoob belongs to this sites")
else:
    print("runoob does not belong to this sites")

###
a = set('abracadabra')
b = set('alacazam')
print(a)
print(a - b)  # a and b 差集
print(a | b)  # a and b 并集
print(a & b)  # a and b 交集
print(a ^ b)  # a and b 中不同时存在的元素
