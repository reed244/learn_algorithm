# -*- coding: utf-8 -*

# 获取用户输入的学生数量
n = int(input())
yx = 0
jg = 0

# 遍历每个学生的分数
for i in range(n):
    score = int(input())
    if score >= 85:
        yx += 1
    if score >= 60:
        jg += 1

# 输出结果，计算并显示及格率和优秀率
print(f"{jg/n*100:.0f}%")
print(f"{yx/n*100:.0f}%")