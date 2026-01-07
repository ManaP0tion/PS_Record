n = int(input())

arr = list(map(int, input().split()))
sortArr = sorted(arr)

ans = [0] * n
for i in range(n):
    ans[i] = sortArr.index(arr[i])
    sortArr[sortArr.index(arr[i])] = -1
    
print(*ans)