str1 = input()
s = set()

for i in range(len(str1)):
    for k in range(i, len(str1)):
        s.add(str1[i:k+1])

print(len(s))