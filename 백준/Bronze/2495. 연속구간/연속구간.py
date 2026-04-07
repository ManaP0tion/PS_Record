for _ in range(3):
    s = input()
    ans = 1
    cnt = 1

    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            cnt+= 1
        else:
            cnt = 1
        if cnt > ans:
            ans = cnt
        
    print(ans)