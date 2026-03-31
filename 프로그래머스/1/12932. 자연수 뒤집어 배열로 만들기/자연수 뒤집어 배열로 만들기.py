def solution(n):
    n = str(n)
    answer = []
    for i in range(1, len(n)+1):
        t = int(n[-i])
        answer.append(t)
    
    return answer