# triangle=[]

# num = int(input())

# digit = 1
# triangle.append([digit])
# cengshu =3
# ans=3


# find =False
# while True:
#     ans+=cengshu
    
#     if find ==True:
#         break
#     meiceng =[]
#     for i in range(1,(cengshu+1)//2):
#         if i==1:
#             shuzi = i
#             meiceng.append(i)
#         else:
#             shuzi =triangle[i-1]+triangle[i]
#             meiceng.append(shuzi)
        
#         if shuzi==num:
#             find=True
#             ans+=i+1
#             break
    
#     triangle.clear()
#     triangle.append(meiceng)

#     cengshu+=1

# if(num==1):
#     print(1)
# elif(num==2):
#     print(5)
# else:
#     print(ans)

def comb(a:int,b:int):
    if b==0:
        return 1

    end=1
    for i in range(a-b+1,a+1):
        end*=i
    for i in range(2,b+1):
        end//=i
    return end

num = int(input())

find = False
i=0
while True:
    for j in range((i+1)//2+1):
        if num == comb(i,j):
            find = True
            break
    
    if find == True:
        break
    
    i+=1
print(int((i+1)*i/2+j+1))

