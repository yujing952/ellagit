#! /usr/bin/python3
#! import operator model
import test_operator
list1 = ['google',23,'baidu',78.4,'runoob']

print("list1[1]:",list1[1])

list1[1] = 10000
print("after change,list1[1]:",list1[1])

list1.append("hello")
print("after append,list1:",list1)

del list1[2]
print("after del list1[2],list1:",list1)


print("\nlist相加：")
list3 = [1,'a',3]
list4 = [4,5,'b']
list5 = list3 + list4
print("list5:", list5)
list6 = list1 + list3 + list4
print("list6:",list6)


print("\n嵌套list：")
alist = ['a','b','c']
blist = [9,8,7,6]
clist = [alist,blist]
print("clist:",clist)
print("clist[0]:",clist[0])
print("clist[1]:",clist[1])
print("clist[0][1]:",clist[0][1])
print("clist[1][1]:",clist[1][0])


