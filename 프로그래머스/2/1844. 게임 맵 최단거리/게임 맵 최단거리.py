from collections import deque

def solution(maps):
    
    n = len(maps)
    m = len(maps[0])
    
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]
    
    q = deque([(0, 0)])
    
    while q:
        cx, cy = q.popleft()
        
        for next in range(4):
            nx, ny = cx + dx[next], cy + dy[next]
            
            # nx, ny 범위 내 + 이동가능(1)인 경우        
            if 0 <= nx < n and 0 <= ny < m and maps[nx][ny] == 1:
                if nx == 0 and ny == 0:
                    continue
                    
                maps[nx][ny] = maps[cx][cy] + 1
                q.append((nx, ny))
                
    ans = maps[n-1][m-1]
    if ans > 1:
        return ans
    else:
        return -1
            
    
    
    
    