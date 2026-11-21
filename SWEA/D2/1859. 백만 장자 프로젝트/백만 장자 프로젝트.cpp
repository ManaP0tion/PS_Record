#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int T;
int N;


int main() {
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		cin >> N;
		vector<int> price(N);
		int MP = 0;
		for (int i = 0; i < N; i++) {
			cin >> price[i];
		}
		long long ans = 0;
		for (int i = N - 1; i >= 0; i--) {
			MP = max(MP, price[i]);
			ans += MP - price[i];
		}
		cout <<"#" << tc << " " << ans << "\n";
	}
}