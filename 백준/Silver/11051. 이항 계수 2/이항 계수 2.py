n, k = map(int, input().split())

def factorial(n):
    ans = 1
    for i in range(1, n+1):
        ans *= i
    return ans

result = factorial(n) // (factorial(n-k) * factorial(k))
print(result % 10007)