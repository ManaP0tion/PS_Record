import sys
input = sys.stdin.readline

def kadane(arr):
    if not arr:
        return 0
    
    curr_sum = total_sum = arr[0]
    
    for i in range(1, len(arr)):
        curr_sum = max(curr_sum + arr[i], arr[i])
        total_sum = max(total_sum, curr_sum)
    return total_sum



while True:
    N = int(input())
    if N == 0:
        break
    
    arr = []
    for _ in range(N):
        arr.append(int(input()))
    ans = kadane(arr)
    print(ans)


