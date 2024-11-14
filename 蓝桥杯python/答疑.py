n = int(input())

ans = 0
ss = []
for i in range(n):
    time = list(map(int, input().split(' ')))
    ans+=time[0]+time[1]
    ss.append(time[0]+time[1]+time[2])
    
ss.sort()

for i in range(n):
    ans+=ss[i]*(n-i-1)
    
print(ans)