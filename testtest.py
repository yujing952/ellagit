#!/usr/bin/python3
from collections import Counter

def deco(func):
    def inner(*args):
        print("numbers are",*args,"and", *args)
        return func(*args)
    return inner

@deco
def add(a,b):
    print(a+b)



def longest_word(filename):
    with open(filename,"r") as f:
        words = f.read().split()
    max_len = len(max(words, key=len))
    return [word for word in words if len(word) == max_len]

def word_count(fname):
    with open(fname) as f:
        return Counter(f.read().split())

if __name__ == "__main__":
    print(longest_word(("testing.txt")))
    print(word_count(("testing.txt")))