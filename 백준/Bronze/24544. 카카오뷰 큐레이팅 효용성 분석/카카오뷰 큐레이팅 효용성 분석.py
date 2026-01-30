def solve(a, b):
    ent = sum(a)
    not_in = 0
    
    for i in range(len(b)):
        if b[i] == 0:
            not_in+=a[i]
    
    print(ent)
    print(not_in)


N = int(input())

a1 = list(map(int, input().split()))
a2 = list(map(int, input().split()))

solve(a1, a2)
