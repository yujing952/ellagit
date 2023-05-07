#! /usr/bin/python3

from inspect import getgeneratorstate
from time import sleep

'''
　　GEN_CREATED：等待执行，即还没有进入协程
　　GEN_RUNNING：解释器执行（这个只有在使用多线程时才能查看到他的状态，而协程是单线程的）
　　GEN_SUSPENDED：在yield表达式处暂停（协程在暂停等待的时候的状态）
　　GEN_CLOSED：执行结束（协程执行结束了之后的状态）
'''


def my_generator():
    for i in range(3):
        sleep(0.5)
        temp = yield i + 1
        print("temp = ", temp)


def show_generator_state(obj):
    try:
        print("the original state of generator: {0}".format(getgeneratorstate(g)))
        next(g)   # activate generator
        print("the original state of generator: {0}".format(getgeneratorstate(g)))
        g.send(100)
        print("the original state of generator: {0}".format(getgeneratorstate(g)))
        next(g)
        print("the original state of generator: {0}".format(getgeneratorstate(g)))
        next(g)
    except StopIteration:
        print("all interation are done")
        print("the original state of generator: {0}".format(getgeneratorstate(g)))


if __name__ == "__main__":
    g = my_generator()
    show_generator_state(g)
