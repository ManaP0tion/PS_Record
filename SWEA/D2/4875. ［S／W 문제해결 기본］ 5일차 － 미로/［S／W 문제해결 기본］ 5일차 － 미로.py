dy = [-1, 0, 1, 0]
dx = [0, 1, 0, -1]

def dfs(y, x):
    global flag
    visited[y][x] = True
    if arr[y][x] == 3:
        flag = 1
        return
    for i in range(4):
        ny = y + dy[i]
        nx = x + dx[i]
        if ny < 0 or nx < 0 or ny >= N or nx >= N:
            continue
        if not visited[ny][nx] and arr[ny][nx] != 1:
            dfs(ny, nx)

T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    arr = []
    sy = sx = 0
    for i in range(N):
        row = list(map(int, input().strip()))
        arr.append(row)
        if 2 in row:
            sy, sx = i, row.index(2)

    visited = [[False] * N for _ in range(N)]
    flag = 0
    dfs(sy, sx)
    print(f"#{tc} {flag}")