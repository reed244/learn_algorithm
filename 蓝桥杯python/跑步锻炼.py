# y = 2000
# m = 1
# d = 1
# ans = 0
# week=6
# while not (y == 2020 and m == 10 and d == 2):
#     if(d==1 or week==1): ans+=2
#     else: ans+=1
#     # ÅĞ¶ÏÈòÄê
#     if (y % 400 == 0 or (y % 100 != 0 and y % 4 == 0)):
#         leap_year = True
#     else:
#         leap_year = False

#     # ÈÕÆÚµİÔöÂß¼­
#     if m == 2:
#         if (leap_year and d == 29) or (not leap_year and d == 28):
#             m += 1
#             d = 1
#         else:
#             d += 1
#     elif m in [4, 6, 9, 11]:
#         if d == 30:
#             m += 1
#             d = 1
#         else:
#             d += 1
#     else:
#         if d == 31:
#             if m == 12:
#                 y += 1
#                 m = 1
#                 d = 1
#             else:
#                 m += 1
#                 d = 1
#         else:
#             d += 1

#     week=(week+1)%6
    
# print(ans)

import datetime

start = datetime.date(2000,1,1)
end = datetime.date(2020,10,1)
days = datetime.timedelta(1)

ans = 0

while end >= start:
    if start.day == 1 or start.weekday() == 0:
        ans += 2
    else:
        ans += 1
    start += days
print(ans)