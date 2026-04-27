n = int(input())

reduce = 0
while (n > 0):
    d = int(input())
    if (d % 2 != 0):
        reduce += 1
    n -= 1
    
print(reduce)