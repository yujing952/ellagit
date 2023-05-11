#!/usr/bin/python3
# -*- coding: utf-8 -*-

class Student(object):
    count = 0

    def __init__(self, name):
        self.name = name
        Student.count += 1

    @classmethod
    def __del__(cls):
        cls.count -= 1

    @staticmethod
    def show_count():
        print('the count is %d ' % Student.count)


if __name__ == '__main__':
    ella = Student('ella')
    # the function which is decorated by staticmethod
    # can be called by class name or object name
    ella.show_count()
    Student.show_count()
    hello = Student('hello')
    hello.show_count()
    Student.show_count()
    print('------------')
    Student.__del__()
    Student.show_count()
    
