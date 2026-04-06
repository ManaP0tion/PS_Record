T = int(input())
for testcase in range(T):
    A, B, N = map(int, input().split())
    cnt = 0
    x = min(A, B)
    y = max(A, B)
    while y<=N:
        cnt += 1
        x += y
        if x>y:
            x, y = y, x
    
    print(cnt)
    
        
        