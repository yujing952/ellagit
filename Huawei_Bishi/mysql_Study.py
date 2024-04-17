#!/usr/bin/python
# -*- coding: utf-8 -*-
import sys

import pymysql
import random
import time

mydb = pymysql.connect(host='127.0.0.1',
                       user='root',
                       passwd='root',
                       port=3306,
                       db='yujingtest')

cur = mydb.cursor()
cur.execute("SHOW DATABASES")
print("---------")
for db in cur:    # print all databases
    print(db)

# 创建表，并随机生成50个数据记录，用execute依次加入到表中，需要循环，时间会比executemany 久一点
cur.execute("use yujingtest")  # open db yujingtest
cur.execute("drop table if exists test")
sql = "create table test (id int primary key, random_value int)"
cur.execute(sql)
dataNum = 100
idList = list(range(dataNum))
randomList = [random.randint(1000, 9999) for x in range(dataNum)]
data = list(zip(idList, randomList))
sql5 = "INSERT INTO test(id, random_value) VALUES(%s, %s)"
start = time.time()
for row in data:
    try:
        cur.execute(sql5, row)
    except pymysql.Error as e:
        print(e)
        mydb.rollback()
        mydb.close()
        sys.exit(1)
mydb.commit()

'''
# 创建表，并随机生成50个数据记录,用executemany()批量加入到表中
cur.execute("use yujingtest")  # open db yujingtest
cur.execute("drop table if exists test")
sql = "create table test (id int primary key, random_value int)"
cur.execute(sql)
dataNum = 100
idList = list(range(dataNum))
randomList = [random.randint(1000, 9999) for x in range(dataNum)]
data = list(zip(idList, randomList))
sql4 = "INSERT INTO test(id, random_value) VALUES(%s, %s)"
start = time.time()

try:
    cur.executemany(sql4, data)
except pymysql.Error as e:
    print(e)
    mydb.rollback()
    mydb.close()
    sys.exit(1)
mydb.commit()



# 批量插入数据到表
cur.execute("use ella_test")
cur.execute("delete from Persons")
sql6 = "INSERT INTO Persons (persionID, LastName, FirstName, Address, City) VALUES (%s, %s, %s, %s, %s)"
val6 = [
    (1, 'niu', 'ella', 'No.502 changdao rd', 'shanghai'),
    (2, 'chen', 'lucky', 'No.210 changdao rd', 'xinxiang'),
    (3, 'wang', 'jelly', 'No.402 changdao rd', 'shanghai'),
]

ps = cur.executemany(sql6, val6)
mydb.commit()

#批量插入表数据记录
sql1 = "INSERT INTO access_logs (aid,site_id, count, date) VALUES (%s, %s, %s, %s)"
val = [
  (1, 1, 45, '2016-05-10'),
  (2, 1, 100, '2016-05-13'),
  (3, 1, 230, '2016-05-14'),
  (4, 2, 10, '2016-05-14'),
  (5, 5, 205, '2016-05-14'),
  (9, 3, 201, '2016-05-17')
]
cur.executemany(sql1, val)
mydb.commit()

cur.execute("select * from access_logs")    # search all data in TABLE sites
print("---------")
for data in cur:
    print(data)
'''

'''
#创建表，并插入一条记录
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
'''

# close数据库
mydb.close()
end = time.time()
print("execute time: ", end-start, "s")
