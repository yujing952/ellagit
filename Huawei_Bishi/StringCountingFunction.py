#!/usr/bin/python3
# -*- coding: utf-8 -*-

# 字符串中含有字符个数的统计功能
def count_characters(s):
    char_count = {}      # define a empty dict, make full use of dict function (key, value)

    for char in s:
        if char in char_count:
            char_count[char] += 1
        else:
            char_count[char] = 1

    return char_count


if __name__ == "__main__":
    input_string = input("Enter a string: ")
    result = count_characters(input_string)

    print("result: ", result)   # help to understand the dict
    print("result.items(): ", result.items())
    print("Character count:")
    for char, count in result.items():
        print(f"{char}: {count}")