def solution(n):
    s = str(n)
    ans = 0;
    for i in range(0, len(s)):
        ans += int(s[i])
        
    return ans