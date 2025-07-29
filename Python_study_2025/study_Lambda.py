# 示例1：对列表中每个元素求平方
from functools import reduce

print("-----map()-----")
# map()特点：
# 惰性计算：仅在需要结果时才执行运算，节省内存
# 可处理多个可迭代对象：函数参数数量需与可迭代对象数量一致，以最短的对象长度为准


def square(x):
    return x**2


numbers = [1, 2, 3, 4, 5]
result = map(square, numbers)
print(list(result))  # 转换为列表：[1, 4, 9, 16, 25]

# 示例2：使用匿名函数（lambda）处理多个可迭代对象
a = [1, 2, 3]
b = [4, 5, 6]
# 对两个列表对应元素求和
sum_result = map(lambda x, y: x + y, a, b)
print(list(sum_result))  # [5, 7, 9]

# 示例3：处理字符串（将每个字符转为大写）
words = ["apple", "banana", "cherry"]
upper_words = map(str.upper, words)
print(list(upper_words))  # ['APPLE', 'BANANA', 'CHERRY']


print("-----filter()-----")
# 示例1：筛选列表中的偶数


def is_even(x):
    return x % 2 == 0


numbers = [1, 2, 3, 4, 5, 6]
even_numbers = filter(is_even, numbers)
print(list(even_numbers))  # [2, 4, 6]

# 示例2：使用lambda筛选长度大于3的字符串
words = ["a", "ab", "abc", "abcd", "abcde"]
long_words = filter(lambda s: len(s) > 3, words)
print(list(long_words))  # ['abcd', 'abcde']

# 示例3：筛选非空元素（过滤None和空字符串）
data = ["", "hello", None, "world", []]
non_empty = filter(None, data)  # function为None时，直接判断元素是否为"真"（非空/非0）
print(list(non_empty))  # ['hello', 'world']


print("-----reduce()-----")
# 示例1：计算列表中所有元素的乘积


def multiply(x, y):
    return x * y


numbers = [1, 2, 3, 4, 5]
product = reduce(multiply, numbers)
print(product)  # 1*2*3*4*5 = 120

# 示例2：使用lambda计算累加和（类似sum()函数）
sum_result = reduce(lambda x, y: x + y, numbers)
print(sum_result)  # 15

# 示例3：带初始值的累积（初始值为10）
sum_with_initial = reduce(lambda x, y: x + y, numbers, 10)
print(sum_with_initial)  # 10 + 1+2+3+4+5 = 25

# 示例4：拼接字符串
words = ["I", "love", "Python"]
sentence = reduce(lambda x, y: x + " " + y, words)
print(sentence)  # "I love Python"
