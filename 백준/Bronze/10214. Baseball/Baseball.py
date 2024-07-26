n = int(input())

for i in range(0, n):
    a = 0
    b = 0
    for j in range(9): 
        c, d = map(int, input().split())
        a += c
        b += d
    if a > b:
        print("Yonsei")
    elif a<b:
        print("Korea")
    else:
        print("Draw")