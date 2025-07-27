# str.strip()
# 在 Python 中，strip() 是 字符串（str）类型 的内置方法（不是属性），用于移除字符串首尾的指定字符（默认移除空白字符）。
# 它是字符串处理中用于清洗数据的常用工具。
# 功能：移除字符串首尾的指定字符（默认移除空格、换行符 \n、制表符 \t、回车符 \r 等空白字符）
# 语法：str.strip([chars])
# chars：可选参数，指定要移除的字符集合（字符串形式），首尾只要出现该集合中的任何字符就会被移除
# 若不指定 chars，则默认移除首尾的所有空白字符
# 返回值：处理后的新字符串（原字符串不会被修改，字符串是不可变类型）


# 场景1：清洗用户输入的带多余空格的文本
print("\n--------case-1---------\n")
user_input = "  \tHello World!\n  "

# 移除首尾空白
cleaned = user_input.strip()
print(f"原始字符串: [{user_input}]")  # 显示空白位置
print(f"处理后字符串: [{cleaned}]")

# 输出：
# 原始字符串: [ 	Hello World!
#   ]
# 处理后字符串: [Hello World!]


# 场景2：清洗带特殊符号的文本（如首尾的引号、星号）
print("\n--------case-2---------\n")
text = "***'Python strip method'***"

# 移除首尾的 * 和 '
cleaned = text.strip("*'")  # chars参数是"*'"，表示要移除*和'
print(cleaned)  # 输出: Python strip method


# 场景3：读取文件时，每行末尾的换行符\n需要移除
print("\n--------case-3---------\n")
lines = ["第一行\n", "第二行\n", "第三行\n"]

# 批量处理每行，移除末尾换行符
clean_lines = [line.strip() for line in lines]
print(clean_lines)  # 输出: ['第一行', '第二行', '第三行']


# 场景4：处理爬虫获取的带多余符号的文本
print("\n--------case-4---------\n")
raw_data = "###【标题：Python基础教程】###"

# 逐步清洗：先移除#，再移除【】
step1 = raw_data.strip("#")  # 结果: 【标题：Python基础教程】
step2 = step1.strip("【】")  # 结果: 标题：Python基础教程
print(step2)


# 场景5：解析带分隔符和多余空格的数据
print("\n--------case-5---------\n")
data = "  name: Alice,  age: 25,  city: Beijing  "

# 先移除首尾空格，再按逗号分割
parts = data.strip().split(',')
# 再处理每个部分的空格和冒号
result = {}
for part in parts:
    key, value = part.strip().split(':')
    result[key.strip()] = value.strip()

print(result)  # 输出: {'name': 'Alice', 'age': '25', 'city': 'Beijing'}

