#! /usr/bin/python3
import contextlib

print("------magic function example-------")


class Company:
    def __init__(self, employee_list):
        self.employee_list = employee_list

    def __getitem__(self, item):
        return self.employee_list[item]

    def __iter__(self):
        return iter(self.employee_list)

    def __len__(self):
        return len(self.employee_list)


company = Company(["Tom", "Bob", "Jane"])

# __getitem__ 使得Company 有了切片操作
company_s = company[:2]

# __getitem__ 使得Company可以进行迭代操作
# 注意for循环先找的是__iter__魔法函数,如果没有则找__getitem__
for em in company:
    print(em)

# __len__使得class Company的object company 有了长度的方法
print(len(company))

print("------class: context manager-------")


class Context:
    def __enter__(self):
        print("Enter")
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        print("Exit")

    def perform_action(self):
        print('Perform action')


with Context() as context:
    context.perform_action()

print("------function: context manager-------")


# windows path  C:\Users\niuyu\Desktop\ellagit\testing.txt
@contextlib.contextmanager
def file_open(filename):
    print('file open')
    yield {}
    print('file end')


with file_open('testing.txt') as f:
    print("perform action")
    read_line =  f.realine()
