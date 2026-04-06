N = int(input())
words = [ input() for _ in range(N)]
ans = 0

for word in words:
    prev = word[0]
    before = []
    isGroupWord = True
    
    for i in range(len(word)):
        if word[i] != prev:
            before.append(prev)
        
        if word[i] in before:
            isGroupWord = False
            break
        prev = word[i]
        
    if isGroupWord:
        ans+=1

print(ans)