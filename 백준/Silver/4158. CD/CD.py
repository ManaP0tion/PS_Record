from collections import defaultdict
import sys
input = sys.stdin.readline


while True:
    cd = defaultdict(bool)
    N, M = map(int, input().split())
    ans = 0
    if N == 0 and M == 0:
        break
        
    for _ in range(N):
        cd[int(input())] = True
    for _ in range(M):
        if cd[int(input())]:
            ans += 1
    
    print(ans)