#!/usr/bin/python3
import time

class ClassTest(object):
    __num = 0

    @classmethod
    def addNum(cls):
        cls.__num += 1

    @classmethod
    def getNum(cls):
        return cls.__num

    # 这里我用到魔术方法__new__，主要是为了在创建实例的时候调用累加方法。
    def __new__(self):
        ClassTest.addNum()
        return super(ClassTest, self).__new__(self)


class Student(ClassTest):
    def __int__(self):
        self.name = ""


class TimeTest(object):
    def __init__(self, hour, minute, second):
        self.hour = hour
        self.minute = minute
        self.second = second

    @staticmethod
    def showTime():
        return time.strftime("%H:%M:%S", time.localtime())


if __name__ == "__main__":
    print("------------1---------------")
    a = Student()
    b = Student()
    print(ClassTest.getNum())

    print("------------2---------------")
    print(TimeTest.showTime())
     t = TimeTest(2, 10, 10)
    nowTime = t.showTime()
    print(nowTime)
