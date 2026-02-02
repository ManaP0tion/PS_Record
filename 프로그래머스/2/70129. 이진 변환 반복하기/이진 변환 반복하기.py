def solution(s):
    zero = 0
    cnt = 0
    answer = []
    
    while True:
        if(s == '1'):
            break
        zero += s.count('0')
        s = s.replace('0', '')
        s = bin(len(s))[2:]
        
        cnt += 1
        
    answer = [cnt, zero]
    return answer