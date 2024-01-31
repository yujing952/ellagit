#!/usr/bin/python3

#  -*-  coding:utf-8 -*-

import re

line = "Cats are smarter than dogs"
searchObj = re.search(r'(.*) are (.*?) .*', line, re.M | re.I)

if searchObj:
    print("searchObj.group(): ", searchObj.group())
    print("searchObj.group(1): ", searchObj.group(1))
    print("searchObj.group(2): ", searchObj.group(2))
else:
    print("Nothing found!!")

matchObj = re.match(r'dogs', line, re.M | re.I)
if matchObj:
    print("match-->matchObj.group():", matchObj.group())
else:
    print("No match !!")

matchObj = re.search(r'dogs', line, re.M | re.I)
if matchObj:
    print("search-->matchObj.group():", matchObj.group())
else:
    print('No match!!')

print('---re.sub---')

phone = "2004-959-559"  # this is a phone number
num = re.sub(r'#.*$', "", phone)
print('phone num 1: ', num)

num = re.sub(r'\D', '', phone)
print('phone num 2: ', num)

print('---repl args is function---')


def double(matched):
    value = int(matched.group('value'))
    return str(value*2)


s = 'A23G4HFD567'
print(re.sub('(?P<value>\d+)', double, s))
