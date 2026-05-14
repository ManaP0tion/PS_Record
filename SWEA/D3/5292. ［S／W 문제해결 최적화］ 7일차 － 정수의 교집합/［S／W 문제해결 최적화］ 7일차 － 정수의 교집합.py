T = int(input())

for testcase in range(1, T+1):
    N, M = map(int, input().split())
    cnt = 0
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    if len(a) >= len(b):
        for n in b:
            if n in a:
                cnt+=1

    else:
        for n in a:
            if n in b:
                cnt+=1

    print(f"#{testcase} {cnt}")