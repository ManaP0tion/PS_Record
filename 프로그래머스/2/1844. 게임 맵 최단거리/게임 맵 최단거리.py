from collections import deque

def solution(maps):
    N = len(maps)
    M = len(maps[0])
    
    visited = [[False] * M for _ in range(N)]   
    
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    
    queue = deque()
    queue.append((0, 0, 1))
    
    visited[0][0] = True
    
    while queue:
        x, y, dist = queue.popleft()
        
        if x == N-1 and y == M-1:
            return dist
        for i in range(4):
            nx, ny = x+dx[i], y+dy[i]
            
            if 0 <= nx < N and 0 <= ny < M and not visited[nx][ny] and maps[nx][ny] == 1:
                visited[nx][ny] = True
                queue.append((nx, ny, dist+1))
                
    return -1
                