n=2021041820210418
l=[]   
i=2
x=n
while i<pow(x+1,0.5):
    if x%i==0:
        l.append(i)
        x=x//i
    else:
        i+=1
l.append(x)
s=set()     
s.add(1)
for j in l:
    p=set()
    for k in s:
        p.add(j*k)
    for k in p:
        s.add(k)
count=0
for k1 in s:            
    for k2 in s:
        if n%(k1*k2)==0:
            count+=1
print(count)