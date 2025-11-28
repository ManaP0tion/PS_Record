import sys
input = sys.stdin.readline

n, m = map(int, input().split())
nums = list(map(int, input().split()))
pre = [0]
tmp_sum = []
sum = 0

for i in range(n):
    sum += nums[i]
    pre.append(sum)

for i in range(n-m+1):
    tmp_sum.append(pre[i+m] - pre[i])

print(max(tmp_sum))