T = int(input())

for testcase in range(1, T+1):
    N, M, L = map(int, input().split())
    tree = [ 0 for _ in range(N+1)]
    
    for i in range(M):
        idx, val = map(int, input().split())
        tree[idx] = val
        
    if N % 2 == 0:
        tree.append(0)
        
    for i in range((N//2)*2, 1, -2):
        tree[i//2] = tree[i] + tree[i+1]
        
    print(f"#{testcase} {tree[L]}")        
        
        
        