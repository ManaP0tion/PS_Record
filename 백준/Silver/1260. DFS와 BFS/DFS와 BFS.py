import sys
from collections import deque
input = sys.stdin.readline

N, M, V = map(int, input().split())
graph = [[] for _ in range(N+1)]

for _ in range(M):  
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
    
for i in range(N+1):
    graph[i].sort()
    


def bfs(start):
    q = deque([start])
    seen = {start}
    
    while q:
        cur = q.popleft()
        
        print(cur, end=" ")
        for next in graph[cur]:
            if next in seen:
                continue
            
            seen.add(next)
            q.append(next)

# 재귀로 구현한다
def dfs(v, seen):
    seen.add(v)
    print(v, end=" ")
    for next in graph[v]:
        if next not in seen:
            dfs(next, seen)
            
dfs(V, set())
print()
bfs(V)