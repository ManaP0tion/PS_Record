TC = int(input())

for testcase in range(TC):
    x, y = map(int, input().split())
    A = (x+y)//2
    B = (x-y)//2
    print(f"{A} {B}")
    