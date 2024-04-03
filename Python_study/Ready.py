#! /usr/bin/python3

'''
Shell，有一个字符串test=“%This is +test1; &This is %test2; This is test3%“, 请按分号分隔，并找到%开头的元素

'''

import re

test = "%This is +test1; &This is %test2; This is test3%"
elements = test.split(";")
print('elements:', elements)
result = [element for element in elements if re.match(r'^%.*$', element)]
print('result: ', result)
