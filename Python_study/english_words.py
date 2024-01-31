#!/usr/bin/python3

import random

english_1st = ['morning', 'afternoon', 'book', 'ruler', 'pencil', 'rubber', 'eye', 'mouth',
               'face', 'nose', 'ear', 'father', 'me', 'my', 'fat', 'thin', 'tall', 'short',
               'classmate', 'friend', 'one', 'two', 'three', 'four', 'five', 'six', 'rabbit',
               'seven', 'eight', 'nine', 'ten', 'apple', 'pear', 'peach', 'orange', 'hamburger',
               'pizza', 'cake', 'pie', 'chick', 'duck', 'cow', 'pig', 'cut', 'stick', 'bear',
               'tiger', 'monkey', 'panda', 'elephant', 'zoo', 'red', 'blue', 'yellow', 'green',
               'colour', 'brown', 'kite', 'draw', 'flower', 'flower', 'house', 'grandmother',
               'grandfather', 'mother', 'read', 'sing', 'dance']
english_2nd = ['frog', 'rabbit', 'bee', 'bird', 'sheep', 'hen', 'dog', 'cat', 'farm', 'family',
               'rice', 'soup', 'egg', 'noodles', 'nice', 'yummy']

if __name__ == '__main__':
    print(random.choices(english_1st))
