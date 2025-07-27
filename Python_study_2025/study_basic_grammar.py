#!/usr/bin/python3

# # call without parameter - split()
# text = "Hello   world\tpython\nprogramming"
# result = text.split()
# print("result=", result)
#
# # call with parameter - ","
# csv_data = "apple, banana, orange, grape"
# fruits = csv_data.split(",", 2)
# print("fruits=", fruits)
#
# # call rsplit()
# txt = "a/b/c/d"
# print("txt.rsplit('/') = ", txt.rsplit("/", 1))

# # 场景：从URL中提取域名和路径
# url = "https://www.runoob.com/python3/python3-data-type.html"
#
# # 第一步：分割协议（http/https）
# without_protocol = url.split('://', 1)[1]  # 'www.runoob.com/python3/python3-data-type.html'
#
# # 第二步：分割域名和路径
# domain, path = without_protocol.split('/', 1)  # 限制1次分割
# print("Domain:", domain)  # 'www.example.com'
# print("Path:", path)    # 'path/to/page?query=1'


# txt2 = ",apple,banana,orange,"
# # 直接split：首尾的分隔符会导致空字符串
# print(txt2.split(','))  # ['', 'apple', 'banana', 'orange', '']
#
# # 处理方式：结合strip()先去除首尾分隔符
# cleaned = txt2.strip(',')  # 'apple,banana,orange'
# print(cleaned.split(','))  # ['apple', 'banana', 'orange']


fruits = ['apple', 'banana', 'orange']

# 基本用法：默认索引从0开始
for index, value in enumerate(fruits):
    print(f"Index {index}: {value}")

# 输出：
# 索引 0: apple
# 索引 1: banana
# 索引 2: orange
