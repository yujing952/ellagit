#! /usr/bin/python3

file_path = r"C:\Users\niuyu\ellagit\ella.txt"
with open(file_path, "r", encoding='utf-8') as f:
    data_read = f.readlines()

print(type(data_read))

# print(data_read)
for line in data_read:
    print(line, end="")
