def solution(n):
    answer =0
    i = n
    if i % 2 != 0:
        for i in range (1, n+1, 2):
            answer += i
    else:
        for i in range (2, n+1, 2):
            answer += int(i*i)
    return answer

