#!/usr/bin/python3
# -*- coding:utf-8 -*-

class Company:
    def __init__(self, employee_list):
        self.employee_list = employee_list

    def __getitem__(self, item):
        return self.employee_list[item]

    def __iter__(self):
        return iter(self.employee_list)

    def __len__(self):
        return len(self.employee_list)


company = Company(['Tom', 'Bob', 'Jane'])
company_s = company[:2]

for em in company:
    print(em)

print(len(company))
print(company_s)
