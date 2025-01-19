import sys
input = sys.stdin.readline

n = int(input())
dp = []

for _ in range(n):
    dp.append(list(map(int, input().split())))

# DP 갱신
for i in range(1, n):  
    for j in range(i + 1):
        if j == 0:  # 가장 왼쪽
            dp[i][j] += dp[i - 1][j]
        elif j == i:  # 가장 오른쪽
            dp[i][j] += dp[i - 1][j - 1]
        else:  # 중간
            dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j])

print(max(dp[n - 1]))
