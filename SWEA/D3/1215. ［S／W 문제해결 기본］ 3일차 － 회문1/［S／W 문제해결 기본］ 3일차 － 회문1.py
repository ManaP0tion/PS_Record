T = 10

for testcase in range(1, T+1):
    # 회문의 길이
    N = int(input())
    ans = 0
    
    # 입력받기
    matrix = [list(input()) for _ in range(8)]
    
    #가장먼저 가로탐색
    for i in range(8):
        for j in range(0, 8-N+1):
            if matrix[i][j:j+N] == matrix[i][j:j+N][::-1]:
                ans += 1
                
                
    # 세로탐색
    for i in range(8):
        for j in range(0, 8-N+1):
            c = ''
            for k in range(j, j+N):
                c += matrix[k][i] 
            if c == c[::-1]:
                ans += 1
                
    print(f"#{testcase} {ans}")
            