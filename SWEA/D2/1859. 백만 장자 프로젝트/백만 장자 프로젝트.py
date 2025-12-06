t = int(input())
for i in range(t):
    ans = 0
    n = int(input())
    arr = list(map(int, input().split()))
    sellPrice = 0
    
    for val in arr[::-1]:
        if val >= sellPrice:
            sellPrice = val
        else:
            ans += sellPrice - val
        
    print("#", i+1, " ", ans, sep="")