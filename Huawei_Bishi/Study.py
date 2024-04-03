#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys


def print_func():
    print('the parameters on cmd line: ')
    for i in sys.argv:
        print(i)
    print('\nPython path: ', sys.path)


# reverse string
def reverse_words(input_str):
    input_words = input_str.split(" ")  # list
    # input_words = input_words[-1::-1]
    input_words.reverse()
    output = ' '.join(input_words)
    return output


def rev_no_space_str(string):
    list1 = list(string)
    list1.reverse()
    str_reversed = ''.join(list1)
    return str_reversed


class MyClass:
    def __iter__(self):
        self.a = 1
        return self

    def __next__(self):
        if self.a <= 20:
            x = self.a
            self.a += 1
            return x
        else:
            raise StopIteration


def fibonacci(n):
    a, b, counter = 0, 1, 0
    while True:
        if counter > n:
            return
        yield a
        a, b = b, a + b
        counter += 1


def http_error(status):
    match status:
        case 400:
            return "Bad request"
        case 404:
            return "Not found"
        case 418:
            return "I'm a teapot"
        case _:
            return "Something is wrong with  the internet"


def write_file(fpath):
    with open(fpath, 'w') as f:
        f.write('python is a very good language.\nYes, it is indeed good')


def read_file(fpath):
    with open(fpath, "r") as f:
        read_str = f.read()
        print(read_str)


def file_read_lines(fpath):
    with open(fpath) as f:
        reader = f.readlines()
        print(reader)


def readline_file(fpath):
    with open(fpath) as f:
        readline_str = f.readline()
        while readline_str:
            yield readline_str
            readline_str = f.readline()


def is_number(s):
    try:
        float(s)
        return True
    except ValueError:
        pass
    try:
        import unicodedata
        unicodedata.numeric(s)
        return True
    except (TypeError, ValueError):
        pass
    return False


def remove_duplicate_element(test_list):
    re = []
    for e in test_list:
        if e in re:
            continue
        else:
            re.append(e)
    print(re)


# 生成随机密码
def generate_pwd(length):
    # define the set which can be used as password
    chars = string.ascii_letters + string.digits + string.punctuation

    # randomly choose chars to generate password
    password = ''.join(random.choice(chars) for _ in range(length))
    return password


# random generate password
def generate_random_pwd(pwd_len):
    mylist = []
    chars_random = string.ascii_letters + string.digits + string.punctuation
    for _ in range(pwd_len):
        mylist.append(random.choice(chars_random))
    pwd = ''.join(mylist)
    return pwd


# 统计字符串里的单词出现的次数
def count_words_times(str_input):
    for w in str_input:
        if w in string.punctuation:
            str_input = str_input.replace(w, ' ')

    list_input = str_input.split()  # default is whitespace
    print('str_input: ', list_input)

    mydict = {}
    for words in list_input:
        count = 1
        if words not in mydict:
            mydict[words] = count
        else:
            mydict[words] += count
    return mydict


"""
    #---case-1---
    print_func()

    # ---case-2---
    inputting = str(input("please input a string:\n"))
    rw = reverse_words(inputting)
    
    print(rw) 

    # ---case-3---
    my_class = MyClass()
    my_iter = iter(my_class)
    for i in my_iter:
        print(i, end=" ")

    # ---case 4---
    f = fibonacci(10)
    while True:
        try:
            print(next(f),end=', ')
        except StopIteration:
            sys.exit()

     # ---case 5---
    error = int(input("please input error code:"))
    print(http_error(error))

"""