import sys
from collections import deque
input = sys.stdin.readline

N = int(input())
A, B = map(int, input().split())
M = int(input())
graph = [[] for _ in range(N+1)]
visited = [0 for _ in range(N+1)]

for i in range(M):
    x, y = map(int, input().split())
    graph[x].append(y)
    graph[y].append(x)
    
def BFS(a, b):
    q = deque([a])
    visited[a] = 0
    
    while q:
        cur = q.popleft()
        
        if cur == b:
            return visited[b]
        
        for next in graph[cur]:
            if visited[next] == 0:
                q.append(next)
                visited[next] = visited[cur] + 1
    
    return -1

print(BFS(A, B)) 