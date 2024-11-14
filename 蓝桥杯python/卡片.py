card = [2021]*10

i = 1
flag = False

while True:
    s=str(i)
    for c in s:
        card[int(c)]-=1
        if card[int(c)] <0:
            flag = True
            break
    
    if flag:
        break
    
    i+=1
            
print(i-1)
    
    
    