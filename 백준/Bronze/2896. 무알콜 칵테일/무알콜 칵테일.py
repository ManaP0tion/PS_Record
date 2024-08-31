a, b, c = map(int, input().split())
i, j, k = map(int, input().split())

temp = min(a/i, b/j, c/k)
print(a-i*temp, b-j*temp, c-k*temp)