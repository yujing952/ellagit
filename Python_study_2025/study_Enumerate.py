# Enumerate()
# 在 Python 中，enumerate() 是一个内置函数，用于将一个可迭代对象（如列表、元组、字符串等）组合成一个索引序列，同时返回元素的索引和值。
# 它在需要同时获取元素位置和内容的场景中非常实用。
#
# 功能：遍历可迭代对象时，同时返回每个元素的索引（默认从 0 开始）和对应的值
# 语法：enumerate(iterable, start=0)
# iterable：需要遍历的可迭代对象（列表、字符串、元组等）
# start：可选参数，指定索引的起始值（默认值为 0）
# 返回值：一个枚举对象（可迭代，包含 (索引, 值) 形式的元组）


print("\n--------case-1---------\n")
# 场景1：遍历列表时获取索引和值
fruits = ['apple', 'banana', 'orange']
# 基本用法：默认索引从0开始
for index, value in enumerate(fruits):
    print(f"索引 {index}: {value}")

# 输出：
# 索引 0: apple
# 索引 1: banana
# 索引 2: orange

print("\n--------case-2----------\n")
# 场景2：编号从1开始（如排行榜、序号列表）
tasks = ['学习', '运动', '阅读']
for num, task in enumerate(tasks, start=1):
    print(f"任务 {num}: {task}")
# 输出：
# 任务 1: 学习
# 任务 2: 运动
# 任务 3: 阅读

print("\n--------case-3----------\n")
# 场景3：查找字符串中特定字符的所有位置
text = "hello world"
target = 'l'
positions = []
for idx, char in enumerate(text):
    if char == target:
        positions.append(idx)
print(f"'{target}' 出现的位置：{positions}")  # 输出: 'l' 出现的位置：[2, 3, 9]


print("\n--------case-4----------\n")
# Function：同时遍历多个列表（结合 zip）
# 场景4：处理多组对应的数据（如姓名和成绩）
names = ['Alice', 'Bob', 'Charlie']
scores = [85, 92, 78]
# 同时获取索引、姓名、成绩
for idx, (name, score) in enumerate(zip(names, scores), start=1):
    print(f"第{idx}名：{name}，分数：{score}")

# 输出：
# 第1名：Alice，分数：85
# 第2名：Bob，分数：92
# 第3名：Charlie，分数：78


print("\n--------case-5----------\n")
# 场景5：批量处理列表元素（如统一添加前缀）
words = ['apple', 'banana', 'orange']
for i, word in enumerate(words):
    words[i] = f"fruit_{word}"  # 通过索引修改原列表

print(words)  # 输出: ['fruit_apple', 'fruit_banana', 'fruit_orange']


print("\n--------case-6----------\n")
# 场景6：筛选列表中大于10的元素，并记录其位置
numbers = [5, 12, 8, 15, 3, 20]
filtered = []

for idx, num in enumerate(numbers):
    if num > 10:
        filtered.append( (idx, num) )  # 存储 (索引, 值) 元组

print("大于10的元素（索引: 值）：", filtered)
# 输出: 大于10的元素（索引: 值）： [(1, 12), (3, 15), (5, 20)]

print("\n--------case-7----------\n")
# enumerate() 返回的是枚举对象，可通过 list() 转换为列表
fruits = ['apple', 'banana']
print(enumerate(fruits))        # <enumerate object at 0x0000021B129D7AB0>
print(list(enumerate(fruits)))  # 输出: [(0, 'apple'), (1, 'banana')]


print("\n--------case-8----------\n")
# 遍历元组
for i, v in enumerate(('a', 'b', 'c')):
    print(i, v)

# 遍历字典（默认遍历键）
d = {'name': 'Alice', 'age': 20}
for i, key in enumerate(d):
    print(i, key, d[key])
