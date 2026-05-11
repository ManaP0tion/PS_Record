T = int(input())

for testcase in range(1, T+1):
    N, M = map(int, input().split())
    
    arr = [list(map(int, input().split())) for _ in range(N)]
    maxCNT = 0
    for i in range (N-M+1):
        for j in range(N-M+1):
            cnt = 0
            for x in range(i, i+M):
                for y in range(j, j+M):
                    cnt += arr[x][y]
            maxCNT = max(maxCNT, cnt)
        
    print(f"#{testcase} {maxCNT}")
            