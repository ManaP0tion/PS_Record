import sys
input = sys.stdin.readline

N = int(input())
li = list(map(int, input().split()))

T, P = map(int, input().split())
tshirts = 0

for x in li:
    tshirts += (x + T - 1) // T
    
pen_bundle = N // P
pen_single = N%P

print(tshirts)
print(pen_bundle, pen_single)    