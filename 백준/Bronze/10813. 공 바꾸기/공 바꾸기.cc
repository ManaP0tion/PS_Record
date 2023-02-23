#include <iostream>
using namespace std;

int main() {
	int N, M,i, j;
	cin >> N >> M;
	int* Case = new int[N + 1];

	for (int i = 1; i <= N; i++) {
		Case[i] = i;
	}
	while (M--) {
		cin >> i >> j;
		int temp = Case[i];
		Case[i] = Case[j];
		Case[j] = temp;
	}

	for (int i = 1; i <= N; i++) {
		cout << Case[i] << " ";
	}
}