#! /usr/bin/python3
import string
import math


def trim(stringChar):
    if stringChar[0] == " ":
        return trim(stringChar[1:])
    elif stringChar[:-1] == " ":
        return trim(stringChar[:-1])
    else:
        return stringChar

def discardSpace(strChar):
    strChar = strChar.lstrip()
    strChar = strChar.rstrip()
    return strChar

if __name__ == "__main__":

    stringTest = "   hello   "
    new_stringTest = trim(stringTest)
    print(new_stringTest)

    print(discardSpace(stringTest))

    print("-----armstrong------")
    num = int(input("input the number: "))
    order = len(str(num))
    sum_total = 0
    temp = num
    while temp > 0:
        digit = temp % 10
        sum_total += digit**order
        temp //= 10
    if num == sum_total:
        print("armstrong number")
    else:
        print(" no armstrong number")
