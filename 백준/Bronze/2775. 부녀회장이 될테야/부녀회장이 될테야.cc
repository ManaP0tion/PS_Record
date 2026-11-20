#include <iostream>
#include <algorithm>
using namespace std;

// 몇층, 몇호
int dp[15][15];

int T;
int k, n;

int main() {
	
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		fill(&dp[0][0], &dp[0][0] + 15 * 15, 0);
		cin >> k >> n;

		// 초기값 세팅(0층)
		for (int i = 1; i <= n; i++)
			// 0층의 i호에는 i명이 산다
			dp[0][i] = i;

		for (int i = 1; i <= k;i++) {
			for (int j = 1; j <= n; j++) {
				dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
			}
		}
		cout << dp[k][n] << "\n";
	}
}