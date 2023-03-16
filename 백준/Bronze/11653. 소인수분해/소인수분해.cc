#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 2; i * i <= N; i++) {	// 2부터 하는 이유는 1의 경우 무조건 나누어떨어지기 때문에
		while (N % i == 0) {
			cout << i << endl;
			N /= i;
		}
	}

	if (N > 1)
		cout << N << endl;

	return 0;
}