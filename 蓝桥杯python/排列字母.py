str = input()

alpha = [0]*26

for i in str:
    alpha[ord(i)-ord('A')]+=1
    
for i in range(26):
    print(chr(ord('A')+i)*alpha[i],end='')
