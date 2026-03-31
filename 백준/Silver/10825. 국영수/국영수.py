n = int(input())
li = []

for _ in range(n):
    name, *scores = input().split()
    li.append((name, *map(int, scores)))
    
li.sort(key=lambda x : (-x[1], x[2], -x[3], x[0]))

for i in li:
    print(i[0])
    