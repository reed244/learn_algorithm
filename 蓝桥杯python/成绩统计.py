# -*- coding: utf-8 -*

# ��ȡ�û������ѧ������
n = int(input())
yx = 0
jg = 0

# ����ÿ��ѧ���ķ���
for i in range(n):
    score = int(input())
    if score >= 85:
        yx += 1
    if score >= 60:
        jg += 1

# �����������㲢��ʾ�����ʺ�������
print(f"{jg/n*100:.0f}%")
print(f"{yx/n*100:.0f}%")