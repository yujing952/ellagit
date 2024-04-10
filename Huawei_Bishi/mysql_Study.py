#!/usr/bin/python
# -*- coding: utf-8 -*-

import pymysql

mydb = pymysql.connect(host='127.0.0.1',
                       user='root',
                       passwd='root',
                       port=3306,
                       db='mysql')

cur = mydb.cursor()
cur.execute("SHOW DATABASES")
print("---------")
for db in cur:    # print all databases
    print(db)

cur.execute("use yujingtest")  # open db yujingtest

"""
sql1 = "INSERT INTO sites (name, url) VALUES (%s, %s)"
val = [
  ('Github', 'https://www.github.com'),
  ('stackoverflow', 'https://www.stackoverflow.com')
]
cur.executemany(sql, val)
mydb.commit()

"""

cur.execute("select * from sites")    # search all data in TABLE sites
print("---------")
for data in cur:
    print(data)

cur.execute("drop table if exists employee")
sql2 = """ create table employee (
          first_name char(20) NOT NULL,
          last_name char(20),
          age int,
          sex char(1),
          income float)"""
cur.execute(sql2)
mydb.commit()

print("------------")
cur.execute("show columns from employee")
for y in cur:
    print(y)

sql3 = """ insert into employee(first_name,
           last_name, age, sex, income)
           values('Mac', 'Mohan', 20, 'M', 2000)"""
cur.execute(sql3)
mydb.commit()
print("----------")
cur.execute("select * from employee")
for z in cur:
    print(z)

mydb.close()
