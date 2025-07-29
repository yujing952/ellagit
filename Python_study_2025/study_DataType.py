#!/usr/bin/python3

print("\n--------case-1---------\n")
age = int(input("请输入你家狗狗的年龄: "))
print("")
if age <= 0:
    print("你是在逗我吧!")
elif age == 1:
    print("相当于 14 岁的人。")
elif age == 2:
    print("相当于 22 岁的人。")
elif age > 2:
    human = 22 + (age - 2) * 5
    print("对应人类年龄: ", human)

# 退出提示
input("点击 enter 键退出")


print("\n--------case-2---------\n")
# 该实例演示了数字猜谜游戏
number = 7
guess = -1
print("数字猜谜游戏!")
while guess != number:
    guess = int(input("请输入你猜的数字："))

    if guess == number:
        print("恭喜，你猜对了！")
    elif guess < number:
        print("猜的数字小了...")
    elif guess > number:
        print("猜的数字大了...")


print("\n--------case-3---------\n")

def http_error(status):
    match status:
        case 400:
            return "Bad request"
        case 404:
            return "Not found"
        case 418:
            return "I'm a teapot"
        case _:
            return "Something's wrong with the internet"


my_status = 400
print(http_error(400))

print("\n--------case-4---------\n")
sites = ["Google", "Wiki", "Weibo", "Runoob", "Baidu"]
for site in sites:
    if len(site) != 4:
        continue
    print(f"Hello, {site}")

    if site == "Runoob":
        break

print("Done!")


print("\n--------case-5---------\n")

for letter in 'Runoob':  # 第一个实例
    if letter == 'b':
        break
    print('当前字母为 :', letter)

var = 10  # 第二个实例
while var > 0:
    print('当前变量值为 :', var)
    var = var - 1
    if var == 5:
        break
print("Good bye!")


print("\n--------case-6---------\n")
for letter in 'Runoob':  # 第一个实例
    if letter == 'o':  # 字母为 o 时跳过输出
        continue
    print('当前字母 :', letter)

var = 10  # 第二个实例
while var > 0:
    var = var - 1
    if var == 5:  # 变量为 5 时跳过输出
        continue
    print('当前变量值 :', var)
print("Good bye!")


print("\n--------case-7---------\n")
# 质数是指大于 1 的自然数，且除了 1 和它自身外，不能被其他自然数整除的数.
for n in range(2, 10):
    for x in range(2, n):
        if n % x == 0:
            print(n, '等于', x, '*', n // x)
            break
    else:
        # 循环中没有找到元素
        print(n, ' 是质数')


print("\n--------case-8---------\n")
# !/usr/bin/python3

# Fibonacci series: 斐波纳契数列
# 两个元素的总和确定了下一个数
a, b = 0, 1
while b < 1000:
    print(b, end=' ')
    a, b = b, a + b
