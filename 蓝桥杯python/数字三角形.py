n = int(input())

a = []

for i in range(n):
    row = list(map(int,input().split()))
    a.append(row)

ans = [[0]*n for _ in range(n)]
direction = [[0]*n for _ in range(n)]
ans[0][0]=a[0][0]
for i in range(1,n):
    for j in range(i+1):
        if j-1<0: 
            ans[i][j]=ans[i-1][j]+a[i][j]
        elif j==i:
            ans[i][j]=ans[i-1][j-1]+a[i][j]
        else:
            ans[i][j]=max(ans[i-1][j-1],ans[i-1][j])+a[i][j]

if n & 1: #�����������м�
    print(ans[n-1][n//2])
else :    #ż�������м������ϴ��
    print(max(ans[n-1][n//2],ans[n-1][n//2-1]))

# ���д�
# h = int(input())  # ��������
# W = [list(map(int, input().split())) for i in range(h)]
# # ѭ���������㵽ÿһ�еĺ͵����ֵ
# for i in range(1, h):
#     for j in range(0, i + 1):
#         if j == 0:  # �����Ԫ��ֻ�������Ϸ��õ�
#             W[i][j] += W[i - 1][j]
#         elif j == i:  # ���ұ�Ԫ��ֻ�������Ϸ��õ�
#             W[i][j] += W[i - 1][j - 1]
#         else:  # ����Ԫ�����Ϸ��ϴ�ֵ�õ�
#             W[i][j] += max(W[i - 1][j - 1: j + 1])
# if h & 1:  # ����������У��򷵻����м�ֵ
#     print(W[-1][h // 2])
# else:  # ż�����򷵻��м�ϴ�ֵ
#     print(max(W[-1][h // 2 - 1], W[-1][h // 2]))