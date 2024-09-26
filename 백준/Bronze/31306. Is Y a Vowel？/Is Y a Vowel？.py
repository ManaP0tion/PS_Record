li1 = ['a', 'e', 'i', 'o', 'u']
li2 = ['a', 'e', 'i', 'o', 'u', 'y']
ans1 = 0
ans2 = 0
s = input()

for c in s:
    if c in li1:
        ans1+=1
    if c in li2:
        ans2+=1

print(ans1, ans2)
