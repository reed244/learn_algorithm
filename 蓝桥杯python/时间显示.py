time=int(input())
second = time//1000
needtime = second%(24*60*60)
hour = needtime/3600
needtime = needtime%3600
min = needtime/60
s = needtime%60
# ×Ö·û´®¸ñÊ½»¯
print(f"{int(hour):02}:{int(min):02}:{int(s):02}")