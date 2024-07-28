n = int(input())

s = list(input())
for _ in range(n-1):
    s2 = input()
    for i in range(len(s)):
        if s[i] != s2[i]:
            s[i] = "?"
print(*s, sep="")