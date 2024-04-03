#!/usr/bin/python3


"""
给定2个字符串，从字符串2中找出字符串1中的所有字符串，去重并
按照ASCII值从小到大排序
输入字符串1：长度不超过1024
输入字符串2：长度不超过1000000
字符串范围满足ASCII编码要求，按照ASCII的值由小到大排序
"""

# inputs
s1 = input("input a string s1: ")
s2 = input("input a string s2: ")


# algorithm
def getResult():
    set1 = set(s1)
    set2 = set(s2)

    set3 = set1.intersection(set2)
    ans = list(set3)
    ans.sort()
    return "".join(ans)


if __name__ == '__main__':
    print(getResult())   # call algorithm
