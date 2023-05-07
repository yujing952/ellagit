#! /usr/bin/python3
import csv

print("--------1---------")


def line_read(filename):
    with open(filename, 'r') as f:
        line = f.readline()
        while line:
            yield line
            line = f.readline()


# read是一个生成器对象
read = line_read("testing.txt")
print(read)   # 会生成一个生成器
for line_context in read:
    print(line_context)
# print(next(read)) # 通过next读取生成器内容

print("--------2---------")
# 逐行读取


def read_big_file(fpath):
    with open(fpath, 'r', encoding='utf8') as f:
        while True:
            line = f.readline()
            if not line:
                break
            yield line


read_try = read_big_file("testing.txt")
print(read_try)
for content in read_try:
    print(content)

print("--------testing.csv---------")
with open('testing.csv', 'r', newline='',  encoding='utf-8') as fObj:
    csvReader = csv.reader(fObj)
    print(csvReader)
    sheet = []
    for row in csvReader:   # 遍历每行,sheet是一个二维列表（一维列表是行)
        print(row)
        sheet.append(row)
print("--------print sheet------")
print(sheet)

print("--------testing000.csv---------")
with open('testing000.csv', 'w', newline='',  encoding='utf-8') as writeFileObj:
    csvWriter = csv.writer(writeFileObj)
    for row in sheet:
        csvWriter.writerow(row)
    print("writer:", csvWriter)

with open('testing000.csv', 'r', newline='',  encoding='utf-8') as readF:
    reader000 = csv.reader(readF)
    print('reader000: ', reader000)
    sheet000 = []
    for row000 in reader000:   # 遍历每行,sheet是一个二维列表（一维列表是行)
        print(row000)
        sheet000.append(row000)



