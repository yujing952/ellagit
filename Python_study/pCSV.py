#!/usr/bin/python3

import csv
with open('testing.csv', 'r', newline='', encoding='utf-8') as f:
    csvReader = csv.reader(f)
    print(csvReader)
    sheet = []
    for row in csvReader:
        print(row)
        sheet.append(row)
    # print(sheet)

with open('testing0.csv', 'w', newline='', encoding='utf-8') as fObj:
    writer = csv.writer(fObj)
    for row in sheet:
        writer.writerow(row)
    fread = csv.reader(fObj)
    print('fread:', fread)

