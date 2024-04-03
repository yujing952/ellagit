#!/usr/bin/python3
# -*- coding: utf-8 -*-

"""
实现英文输入法单词联想功能
需求如下：
1>. 依据用户输入的单词前缀，从已输入的英文语句中联想出用户想输入的单词，按字典序输出
联想到的单词序列。
2>. 如果联想不到，请输出用户输入的单词前缀
注意：
1>. 单词联想时，区分大小写
2>. 缩略形式如don't，判定为2个单词，"don" 和"t"
3>. 输出的单词序列，不能有重复单词，且只能是英文单词，不能有标点符号

分析：数组去重，数组字典排序，过滤等知识

"""
import re

s = input("please input a string s: ")
pre = input("please input a pre: ")


# algorithm
def getResult(s, pre):
    tmp = re.split("[^a-zA-Z]", s)  # this step is very important
    cache = list(set(tmp))
    cache.sort()
    cache = list(filter(lambda x: x.startswith(pre), cache))
    if len(cache) > 0:
        return " ".join(cache)
    else:
        return pre


if __name__ == '__main__':
    print(getResult(s, pre))   # call algorithm
