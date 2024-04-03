#!/usr/bin/python
# -*- coding: utf-8 -*-
from Study import *
import random
import string
import re


if __name__ == "__main__":
    pattern = r'\d+'
    text = 'The price is $20.45'
    pattern_matched = re.search(pattern, text)

    if pattern_matched:
        print('Match found: ', pattern_matched.group())
    else:
        print('No match')

    """
    inputting = str(input("please input a string:\n"))
    rw = reverse_words(inputting)
    print(rw)
    rev_word = rev_no_space_str(str(input("please input a string without space: ")))
    print(rev_word)

    # 生成随机密码
    pwd_length = int(input("Please input the len of random password："))
    print('Function 1: ', generate_pwd(pwd_length))
    print('Function 2: ', generate_random_pwd(pwd_length))

    # 统计字符串里的单词出现的次数
    s = str(input("Please input a str:"))
    s_dict = count_words_times(s)
    print('s_dict = ', s_dict)
    """

