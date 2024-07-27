def solution(s):
    answer = True
    
    count_p = 0
    count_y = 0
    s = s.lower()
    for i in range(len(s)):
        if s[i] == "p":
            count_p += 1
        if s[i] == "y":
            count_y += 1
    
    if count_p == count_y:
        return True
    return False