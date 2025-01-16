import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

n, m, r = map(int, input().split())
graph = [[] for _ in range(n+1)]
visited = [-1] * (n+1)
order = [0] * (n+1)

for _ in range(m):
    a, b = map(int, input().split())
    graph[a]+=[b]
    graph[b]+=[a]

ordered = 1

def dfs(node):
    global ordered
    order[node] = ordered
    ordered += 1

    for next in sorted(graph[node], reverse=True):
        if visited[next] == -1:
            visited[next] = visited[node]+1
            dfs(next)

visited[r] = 0
dfs(r)
total = 0
for i in range(1, n+1):
    if visited[i] != -1:
        total += (order[i] * visited[i])
print(total)