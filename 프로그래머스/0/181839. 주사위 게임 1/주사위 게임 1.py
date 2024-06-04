import math

def solution(a, b):
    if isOdd(a) + isOdd(b) == 2:
        answer = a*a + b*b
    elif isOdd(a) + isOdd(b) == 1:
        answer = 2*(a+b)
    else:
        answer = abs(a - b)
    return answer

def isOdd(n):
    if n == 1 or (n-1) % 2 ==0:
        return 1
    return 0