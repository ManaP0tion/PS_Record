t = int(input())
for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    dic = {}
    
    for a in arr:
        if a in dic:
            dic[a] += 1
        else:
            dic[a] = 0
    
    freq = max(dic, key=dic.get)
    print(f"#{n} {freq}")