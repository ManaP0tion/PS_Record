#include <iostream>
using namespace std;

int factorial(int n) {
	if (n > 2) 
		n *= factorial(n - 1);
	return n;
}

int main() {
	int N;
	int ans = 1;
	cin >> N;

	if (N != 0) 
		ans = factorial(N);

	cout << ans;
}

