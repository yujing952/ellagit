#!/usr/bin/python3
# _*_ coding: utf-8 _*_
import os, time, random
from multiprocessing import Process, Pool


"""
def triangles():
    n = [1]
    yield n
    while(True):
        n = [v+n[k-1] if(k>0 and k<=(len(n)-1)) else v for k, v in enumerate(n)]
        n.append(1)
        yield n



def triangles():
    L = [1]
    yield L
    while True:
        L = [v+w for v,w in zip([0]+L, L+[0])]
        yield L


n = 0
results = []
for t in triangles():
    results.append(t)
    n = n + 1
    if n == 10:
        break

for t in results:
    print(t)

if results == [
    [1],
    [1, 1],
    [1, 2, 1],
    [1, 3, 3, 1],
    [1, 4, 6, 4, 1],
    [1, 5, 10, 10, 5, 1],
    [1, 6, 15, 20, 15, 6, 1],
    [1, 7, 21, 35, 35, 21, 7, 1],
    [1, 8, 28, 56, 70, 56, 28, 8, 1],
    [1, 9, 36, 84, 126, 126, 84, 36, 9, 1]
]:
    print('测试通过!')
else:
    print('测试失败!')

"""


def normalize(name):
    newname = ''
    if 97 <= ord(name[0]) <= 122:
        # newname = chr(ord(name[0]) - 32)
        newname = name[0].upper()
    for n in name[1:]:
        if 65 <= ord(n) <= 90:
            # newname = newname + chr(ord(n) + 32)
            newname = newname + n.lower()
        else:
            newname = newname + n
    return newname


# print(normalize('hELLO'))


class Student(object):
    def __init__(self, name, score):
        self.name = name
        self.score = score

    def get_grade(self):
        if self.score >= 90:
            return 'A'
        elif self.score >= 60:
            return 'B'
        else:
            return 'C'

    def print_score(self):
        print('%s: %s' % (self.name, self.score))


bart = Student('Bart', 99)
lisa = Student('Lisa', 59)
# print(lisa.name, lisa.get_grade())
# print(bart.name, bart.get_grade())


def run_proc(name):
    print('Run child process %s (%s)...' % (name, os.getpid()))


# print('---------process----------')


if __name__ == '__main__':
    print('Parent process %s. ' % os.getpid())
    p = Process(target=run_proc, args=('testing',))
    print('Child process will start.')
    p.start()
    p.join()
    print('Child process end. ')

