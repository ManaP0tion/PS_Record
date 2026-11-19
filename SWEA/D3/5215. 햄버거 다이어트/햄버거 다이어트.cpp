#include <iostream>
using namespace std;

int T;
int N, L;

// dp[재료의 수][제한칼로리]
int dp[21][10001];



int main() {
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		cin >> N >> L;
		int score[21] = { 0, };
		int cal[21] = { 0, };
		for (int i = 1; i <= N; i++) {
			cin >> score[i] >> cal[i];
		}

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= L; j++) {
				if (cal[i] >= j) {
					// 칼로리가 제한보다 높으면 못넣지
					dp[i][j] = dp[i - 1][j];
				}
				// 칼로리가 제한보다 낮으면
				else {
					// 최대값 비교를 함 
					// 1. 안넣는경우 / 2. 넣고 점수반영
					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - cal[i]] + score[i]);
				}
			}
		}

		cout << "#" << tc << " " << dp[N][L] << endl;


	}
}