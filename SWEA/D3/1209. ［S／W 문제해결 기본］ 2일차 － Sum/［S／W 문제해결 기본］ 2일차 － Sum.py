# sum
# 2d array problem

for testcase in range(1, 11):
    t = int(input())
    # arr = [list(map(int, input().split())) for _ in range(100)]
    # for i in range(100):
        # arr.append(list(map(int, input().split())))
    ans = []
    graph = []    
    
    # 입력하면서 행 체크
    for i in range(100):
        arr = list(map(int, input().split()))
        ans.append(sum(arr))
        graph.append(arr)
    
    # 열 체크
    for i in range(100):
        col = 0
        for j in range(100):
            col += graph[j][i]
        ans.append(col)
    
    # 왼쪽 대각선
    left = 0
    for i in range(100):
        left += graph[i][i]
    ans.append(left)
    

    
    print(f"#{testcase} {max(ans)}")