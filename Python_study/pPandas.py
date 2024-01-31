#!/usr/bin/python3

import pandas

with open('testing.csv', 'r', newline='', encoding='utf-8') as f:
    data = pandas.read_csv(f)
    print(data)

    data.to_csv('testing1.csv')

