#!/usr/bin/python3

def readByLine(filename):
    with open(filename) as f:
        read_line = f.readline()
        while read_line:
            yield read_line
            read_line = f.readline()


"""
read = readByLine('testing.txt')  # read is generator object
print(read)
for line in read:
    print(line)
"""


def read_big_file(fpath):
    with open(fpath, 'r', encoding='utf-8') as f:
        while True:
            read_line = f.readline()
            if not read_line:
                break
            yield read_line


read_try = read_big_file('testing.txt')
print(read_try)
for content in read_try:
    print(content)


