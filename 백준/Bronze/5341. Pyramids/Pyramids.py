import sys
input = sys.stdin.readline

while True:
    ans = 0
    n = int(input())
    if not n:
        break
        
    for i in range(1, n+1):
        ans += i
    
    print(ans)