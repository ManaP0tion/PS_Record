N = int(input())
pairs = [list(map(int, input().split())) for _ in range(N)]


output = [0] * N
for i in range(N):
    output[i] = sum(pairs[i])
print(*output, sep="\n")