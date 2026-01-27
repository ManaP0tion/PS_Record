T, X = map(int, input().split())
N = int(input())

sign = 0 

for _ in range(N):
    K = int(input())
    li = list(map(int, input().split()))
    
    if X not in li:
        sign = 1
        break
        
if sign == 0:
    print("YES")
    
else:
    print("NO")