T = int(input())

for _ in range(T):
    N = int(input())
    points = [tuple(map(int, input().split())) for _ in range(N)]
    
    maxArea = 0
    for i in range(N):
        x, y = points[i]
        max_w = 0
        max_h = 0
        
        for j in range(N):
            if i == j:
                continue
            cx, cy = points[j]
            if cx == x:
                max_h = max(max_h, abs(y - cy))
            if cy == y:
                max_w = max(max_w, abs(x-cx))
            
        maxArea = max(maxArea , max_w*max_h)
    print(maxArea)
    
    