#! /usr/bin/python3
import csv
import pandas

print("--------panda to read testing.csv---------")
with open('testing.csv', 'r', newline='', encoding='utf-8') as f:
    # use pandas.read_csv() to read testing.csv file
    data = pandas.read_csv(f)

    print("----print data from testing.csv---")
    print(data)
    print("---use describe() to count data---")
    print(data.describe())

    print("---head data----")
    head_data = data.head(2)
    print(head_data)

    print("---copy data1 to testing222.csv file----")
    data.to_csv('testing333.csv', index=False)
        
