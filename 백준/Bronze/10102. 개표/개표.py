n = int(input())
s = input()
a = s.count('A')

if( a > n-a):
    print("A")
elif (a == n-a):
    print("Tie")
else:
    print("B")