import datetime
y1, m1, d1 = map(int, input().split())
y2, m2, d2 = map(int, input().split())

if datetime.date(y2, m2, d2) >= datetime.date(y1+1000, m1, d1):
    print("gg")
else:
    print(f"D-{(datetime.date(y2, m2, d2) - datetime.date(y1, m1, d1)).days}")