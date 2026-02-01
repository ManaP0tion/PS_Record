import math
 
naturalNum = list(map(int, input().split()))
result = []
 
for i in range(3):
    for j in range(i + 1, 4):
        for k in range(j + 1, 5):
            result.append(math.lcm(naturalNum[i], naturalNum[j], naturalNum[k]))
 
print(min(result))