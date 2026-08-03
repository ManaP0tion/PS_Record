#BFS
from collections import deque

def bfs(computers, start, visited):
    n = len(computers)
    queue = deque([start])
    visited[start] = True
    
    while queue:
        v = queue.popleft()
        for i in range(n):
            if computers[v][i] and not visited[i]:
                queue.append(i)
                visited[i] = True
            

def solution(n, computers):
    visited = [False] * n
    answer = 0
    
    for i in range(n):
        if not visited[i]:
            bfs(computers, i, visited)
            answer += 1
    return answer