# 조건 : 한 변은 x축에 평행, 다른 한 변은 y축에 평행
TC = int(input())

for testcase in range(1, TC+1):
    N = int(input())
    points = [tuple(map(int, input().split())) for _ in range(N)]
    maxArea = 0
    for i in range(N):
        x, y = points[i]
        max_v = 0
        max_h = 0
        
        for j in range(N):
            if i == j:
                continue
            tx, ty = points[j]
            if tx == x:
                max_v = max(max_v, abs(ty-y))
            if ty == y:
                max_h = max(max_h, abs(tx-x))
        maxArea = max(maxArea, max_h * max_v)
    print(maxArea)
        
        