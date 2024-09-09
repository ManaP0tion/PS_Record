import datetime
y1, m1, d1 = map(int, input().split())
y2, m2, d2 = map(int, input().split())

today = datetime.date(y1, m1, d1)
dday = datetime.date(y2, m2, d2)

diff = int((dday - today).days)

flag = True

if y2 - y1 > 1000:
    flag = False
elif y2 -y1 == 1000:
    if d2 == d1:
        if d2 >= d1:
                flag = False
    elif d2 > d1:
        flag = False    
        
if flag == True:
    print(f"D-{diff}")
else:
    print("gg")