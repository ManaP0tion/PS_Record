import math

T = int(input())
for testcase in range(1, T+1):
    
    arr = [2,3,5,7,11]
    ans = []
    N = int(input())
    
    for i in range(5):
        div = arr[i]
        cnt = 0
        flag = True
        
        while flag:
            if N%div != 0:
                flag = False
                
            else:
                N = N // div
                cnt += 1
                
        ans.append(cnt)
    print(f"#{testcase} ", end="")        
    print(*ans)
        
    
    
    
    
    



