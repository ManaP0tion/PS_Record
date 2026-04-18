T = int(input())
for testcase in range(1, T+1):
    P, Q, R, S, W = map(int, input().split())
    
    A = P * W
    B = 0
    if W <= R:
        B = Q
    else:
        B = Q + (W-R) * S
    
        
    print(f"#{testcase} {min(A, B)}")


