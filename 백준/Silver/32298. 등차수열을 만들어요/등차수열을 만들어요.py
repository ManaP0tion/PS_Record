def isPrime(n):
    if n<2:
        return False
    
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

def solve():
    n,m = map(int, input().split())

    limit = 2000000
    
    for start in range(1, limit - (n-1) * m+1):
        isValid = True
        
        for k in range(n):
            current = start + k*m
            if(isPrime(current)):
                isValid = False
                break
            
        if isValid:
            result = [start + k*m for k in range(n)]
            print(*(result))
            return
        
    print(-1)
    
solve()