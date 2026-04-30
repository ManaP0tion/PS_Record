for testcase in range(1, 11):
    dump = int(input())
    arr = list(map(int, input().split()))
    ans = 0
    arr = sorted(arr)
    
    i = 1
    
    while i<=dump:
        arr[arr.index(max(arr))] -= 1
        arr[arr.index(min(arr))] += 1
        i += 1
        
    ans = max(arr) - min(arr)
    print(f"#{testcase} {ans}")