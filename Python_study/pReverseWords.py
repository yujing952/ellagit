#!/usr/bin/python3

def reverseWords(input_words):
    words = input_words.split(' ')
    print(words)
    words = words[-1::-1]
    output = ' '.join(words)
    return output


def reverseStr(string):
    string = string[-1::-1]
    return string


if __name__ == "__main__":
    inputs = input('please input a sentence:')
    rw = reverseWords(inputs)
    print(rw)
    # -----------------------
    str1 = input('please input a  string:')
    str11 = reverseStr(str1)
    print(str11)





