import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)

def dfs(x, y):
    dx = [0, 0, -1, 1]
    dy = [1, -1, 0, 0]
    
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        
        if(0<= nx < M) and (0 <= ny < N) and graph[ny][nx] == 1:
            graph[ny][nx] = -1
            dfs(nx, ny)


T = int(input())

for _ in range(T):
    M, N, K = map(int, input().split())
    graph = [[0 for _ in range(M)] for _ in range(N)]
    
    for _ in range(K):
        X, Y = map(int, input().split())
        graph[Y][X] = 1
        
    cnt = 0
    for i in range(M):
        for j in range(N):
            if graph[j][i] == 1:
                dfs(i, j)
                cnt += 1
    
    print(cnt)
        


            
            