def binary(a, b):
    global cnt
    if a<=b:
        binary(a*2, b)
        tree[a] = cnt
        cnt += 1
        binary(a*2 + 1, b)

T = int(input())
for testcase in range(1, T+1):
    N = int(input())
    tree = [0] * (N+1)
    cnt = 1
    binary(1, N)
    print(f'#{testcase} {tree[1]} {tree[N//2]}')

    