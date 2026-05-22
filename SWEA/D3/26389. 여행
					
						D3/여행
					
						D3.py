T = int(input())

for _ in range(T):
    A = set(input())

    x = ('E' in A) == ('W' in A)
    y = ('N' in A) == ('S' in A)

    if x and y:
        print("Yes")
    else:
        print("No")

    