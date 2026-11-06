T = int(input())
for testcase in range(1, T+1):
    n, m, l = map(int, input().split())

    tree = [0]*(n+1)

    for i in range(m):
        idx, value = map(int, input().split())
        tree[idx] = value

    for i in range(n, 1, -1):
        tree[i//2] += tree[i] 

    print(f"#{testcase} {tree[l]}")
    