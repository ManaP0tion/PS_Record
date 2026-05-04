T = int(input())

for testcase in range(1, T+1):
    N, M = map(int, input().split())
    
    # 입력을받자
    arr = [input() for _ in range(N)]
    ans = ""
    
    # 가로부터 체크한다
    for i in range(N):
        for j in range(N - M + 1):
            s = arr[i][j:j+M]
            if s == s[::-1]:
                ans = s
            
    # 세로 체크
    for j in range(N):
        for i in range(N-M+1):
            s = ""
            for k in range(M):
                s += arr[i+k][j]
            if s == s[::-1]:
                ans = s
    
    print(f"#{testcase} {ans}")    
            
            