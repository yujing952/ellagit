#! /usr/bin/python3

def line_read(filename):
    with open(filename) as f:
        line = f.readline()
        while line:
            yield line
            line = f.readline()


# read是一个生成器对象
read = line_read("testing.txt")
print(read) # 会生成一个生成器
for line_context in read:
    print(line_context)
# print(next(read)) # 通过next读取生成器内容

# 逐行读取
def read_big_file(fpath):
    with open(fpath,'r',encoding='utf8') as f:
        while True:
            line = f.readline()
            if not line:
                break
            yield line


read_try = read_big_file("testing.txt")
print(read_try)
for content in read_try:
    print(content)
