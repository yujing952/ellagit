#!/usr/bin/python3
# -*- coding:utf-8 -*-

class Student(object):

    def __init__(self, name, score):
        self.__name = name
        self.__score = score

    def get_name(self):
        return self.__name

    def get_score(self):
        return self.__score

    def set_score(self, score):
        if score < 0:
            print('invalid input, %d is less than 0' % score)
        elif score > 100:
            print('overflow input, %d is bigger than 100' % score)
        else:
            self.__score = score

    def print_score(self):
        print('%s: %s' % (self.__name, self.__score))

    def get_grade(self):
        if self.__score >= 90:
            return 'A'
        elif self.__score >= 60:
            return 'B'
        else:
            return 'C'


class Animal(object):

    def run(self):
        print('Animal is running')


class Dog(Animal):
    def run(self):
        print('dog is running')


class Cat(Animal):
    def run(self):
        print('cat is running')


class Timer(object):

    def run(self):
        print('start...')


class D(Animal):
    pass


class F:
    pass


def run_twice(arg):
    arg.run()
    arg.run()


if __name__ == '__main__':

    '''
    #---------1-----------
    animal = Animal()
    dog = Dog()
    cat = Cat()
    timer = Timer()
    d = D()
    f = F()
    run_twice(animal)
    run_twice(dog)
    run_twice(cat)
    run_twice(timer)
    run_twice(d)

    #----------2------------
    ella = Student('ella', 100)
    ella.print_score()
    print('the grade: %s' % ella.get_grade())
    print('name: %s' % ella.get_name())
    print('score: %d' % ella.get_score())
    print('-------------')
    ella.set_score(-10)
    ella.print_score()
    '''
