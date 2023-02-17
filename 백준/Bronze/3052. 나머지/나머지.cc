#include <iostream>
using namespace std;

int main() {
	int input;
	int remain[42] = { 0, };		
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		cin >> input;
		remain[input % 42]++;
	}
	for (int input : remain) {
		if (input > 0) {
			sum++;
		}
	}
	cout << sum;

	return 0;

	cout << sum << "\n";
	return 0;
}