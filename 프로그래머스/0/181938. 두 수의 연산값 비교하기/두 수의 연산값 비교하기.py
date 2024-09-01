def solution(a, b):
    answer = 0
    
    t1 = 2*a*b
    t2 = int(str(a)+str(b))
    answer = max(t1, t2)
    return answer