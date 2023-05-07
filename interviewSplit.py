#!/usr/bin/python3
from collections import Counter


# 统计字符串每个单词出现的次数


def word_amount(str_sentence):
    split_list = str_sentence.split()
    dict_result = {}
    for word_name in split_list:
        if word_name not in dict_result.keys():
            dict_result[word_name] = 1
        else:
            dict_result[word_name] += 1
    return dict_result


if __name__ == "__main__":
    sentence = "I can because i think i can"

    print("-------1--------")
    dict_count = word_amount(sentence)
    print(dict_count)

    print("-------2---------")
    counts = Counter(sentence.split())
    print(counts)

    print("-------3---------")
    c = Counter()
    mystring = "python programming"
    for i in mystring:
        c[i] += 1
    print(c)
