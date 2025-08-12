import matplotlib.pyplot as plt
import seaborn as sns

# 绘制折线图
x = [1, 2, 3, 4]
y = [10, 20, 15, 25]
plt.plot(x, y)
plt.title("示例折线图")
plt.show()

# 用seaborn绘制直方图
sns.histplot(data=df, x="age", kde=True)  # kde显示核密度曲线
