max = 10**7
li = [1]*max
for i in range(2, int(max**0.5)+1):
    if li[i]:
        for j in range(i+i, max, i):
            li[j] = 0
prime = [i for i in range(2, max) if li[i]]
K = int(input())
print(prime[K-1])    