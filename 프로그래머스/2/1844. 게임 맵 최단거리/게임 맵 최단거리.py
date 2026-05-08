from collections import deque

def solution(maps):
    answer = 0
    N = len(maps)
    M = len(maps[0])
    
    visited = [[False] * M for _ in range(N)]
    q = deque()
    q.append((0, 0, 1)) #(행, 열, 거리)
    
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    
    while q:
        x, y, dist = q.popleft()
        if x == N-1 and y == M-1:
            return dist
        
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
        
            if 0<=nx<N and 0<=ny<M and not visited[nx][ny] and maps[nx][ny] ==1:
                visited[nx][ny] = True
                q.append((nx, ny, dist+1))
    
    return -1