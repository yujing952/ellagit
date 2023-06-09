#!/usr/bin/python3
# -*- coding: utf-8 -*-

def reverseWords(input):
    inputWords = input.split(' ')
    inputWords = inputWords[-1::-1]
    output = ' '.join(inputWords)
    return output


def reverseStr(str1):
    if str1:
        return str1[-1::-1]


if __name__ == '__main__':
    '''
    input = input('please input a sentence: ')
    rw = reverseWords(input)
    print(rw)
    '''
    s = input('please input a string: ')
    s1 = reverseStr(s)
    print(s1)
