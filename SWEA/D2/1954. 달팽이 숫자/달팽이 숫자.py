T = int(input())

# 우 하 좌 상
dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]


for testcase in range(1, T+1):
    N = int(input())
    arr = [[0] * N for _ in range(N)]    
    
    x, y, idx = 0, 0, 0
    # 탈출조건
    for i in range(1, (N*N)+1):
        arr[y][x] = i
        
        nx = x + dx[idx]
        ny = y + dy[idx]
        
        # 범위를 벗어나거나 이미 체워진경우 방향 바꿈
        if not (0<=nx< N and 0<=ny<N) or arr[ny][nx] != 0:
            idx = (idx+1)%4
            nx = x+dx[idx]
            ny = y+dy[idx]
        x, y = nx, ny
    print(f"#{testcase}")
    for nums in arr:
        print(*nums)
            
    
    