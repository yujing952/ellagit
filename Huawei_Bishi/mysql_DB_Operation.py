#!/usr/bin/python
# -*- coding: utf-8 -*-
import sys

import pymysql

# Open database connection
mydb = pymysql.connect(host='127.0.0.1',
                       user='root',
                       passwd='root',
                       port=3306,
                       db='yujingtest')

# using cursor() to get the operation of cursor
mycur = mydb.cursor()
mycur.execute('use yujingtest')

mycur.execute("SELECT VERSION()")

# Using fetchone() to get single data
data = mycur.fetchone()
print("Database version: %s" % data)

"""

"""

# SQL DELETE
sql_delete = "DELETE FROM employee"
try:
    # Execute SQL
    mycur.execute(sql_delete)
    # Commit DATABASE to execute
    mydb.commit()
except pymysql.Error as e:
    print(e)
    # rollback when happening error
    mydb.rollback()
    mydb.close()
    sys.exit(1)


# SQL INSERT
sql_insert = """ insert into employee(first_name,
           last_name, age, sex, income)
           values(%s, %s, %s, %s, %s)"""

val_insert = [('Mac', 'Mohan', 6, 'M', 100),
              ('Ella', 'Niu', 42, 'F', 500),
              ('Lucky', 'Chen', 6, 'M', 2000)
              ]
try:
    mycur.executemany(sql_insert, val_insert)
    mydb.commit()
except pymysql.Error as e:
    print(e)
    mydb.rollback()
    mydb.close()
    sys.exit(1)

print("----------")
cur = mycur.execute("select * from employee")
print(cur)
print('---------')
data = mycur.fetchall()
print(data)


# SQL UPDATE sentence
sql_update = "UPDATE employee SET first_name='Yujing', last_name='Niu' WHERE age=42"
try:
    # Execute SQL
    mycur.execute(sql_update)
    # Commit DATABASE to execute
    mydb.commit()
except pymysql.Error as e:
    print(e)
    # rollback when happening error
    mydb.rollback()
    mydb.close()
    sys.exit(1)


cur = mycur.execute("select * from employee")
print(cur)
print('---------')
data = mycur.fetchall()
print(data)

# close数据库
mydb.close()
