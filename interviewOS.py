#! /usr/bin/python3

import sys


'''
def exitfunc(val):
    print(val)
    sys.exit(0)

print("hello")

try:
    sys.exit(1)
except SystemExit as value:
    exitfunc(value)
'''

def div(num1,num2):
    if num2 == 0:
        raise Exception("raise exception: the denominator is 0 ")
    else:
        return num1/num2


def div2(data1,data2):
    assert data2 != 0,"assert exception, the deno is zero"


class CustomExceptionDemo(Exception):
    def __init__(self,exception_name,exception_msg):
        self.exception_name = exception_name
        self.exception_msg = exception_msg

if __name__ =="__main__":
    def div3(num11,num22):
        if num22 == 0:
            raise CustomExceptionDemo("Custom Exception1","please check if the deno is zero")
    try:
        div3(1,0)
    except Exception as error:
        print("execute Exception from except sentence :", error)
    else:
        print("execute else sentence")
    finally:
        print("program running is done")
