def Kadane(arr):
    if not arr:
        return 0
    
    current_max = total_max = arr[0]
    
    for i in range(1, len(arr)):
        current_max = max(arr[i], current_max + arr[i])
        total_max = max(total_max, current_max)
    return total_max
        

T = int(input())

for _ in range(T):
    N = int(input())
    arr = list(map(int, input().split()))
    
    ans = Kadane(arr)
    print(ans)
    
    
    
    