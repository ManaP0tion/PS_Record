#include <iostream>
#include <algorithm>
using namespace std;

int a[1001];
int dp[1001];

int main() {
	int n;
	int result = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		dp[i] = 1;
	}
	
	// 기준값
	for (int i = 1; i <= n; i++) {
		// 이전 값
		for (int j = 1; j <= i; j++) {
			if (a[i] < a[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		result = max(result, dp[i]);
	}
	cout << result;

}