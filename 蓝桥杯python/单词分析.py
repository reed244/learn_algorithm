#ord() chr()

str = input()
num=[0]*26

for char in str :
    num[ord(char)-ord('a')]+=1
    
ans, index = max((value, idx) for idx, value in enumerate(num))

print(chr(index + ord('a')))
print(ans)

