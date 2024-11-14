# f[n]=min(f[n-k]+d[n,n-k]) k in [1,21]

from math import lcm

num = [0,0]

for i in range(2,2022):
    distance = []
    for k in range(1,22):
        if(i-k<=0): break
        distance.append(num[i-k]+lcm(i,i-k))
    num.append(min(distance))

print(num[2021])