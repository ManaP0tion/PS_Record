T = 10

for testcase in range(1, T+1):
    ans = 0
    N = int(input())
    arr = list(map(int, input().split()))
    
    for i in range(2, N-2):
        left = max(arr[i-2], arr[i-1])
        right = max(arr[i+1], arr[i+2])
        lr_max = max(left, right)
        if arr[i] > lr_max:
            ans += arr[i] - lr_max
    
    print(f"#{testcase} {ans}")