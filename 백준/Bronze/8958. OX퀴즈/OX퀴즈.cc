#include <iostream>
using namespace std;

int main() {
	int num;
	int score = 0;
	int sum = 0;	
	char check[80] = {0, };

	cin >> num;
	

	for (int i = 0; i < num; i++) {
		cin >> check;
		for (int j = 0; j < 80; j++) {
			if (check[j] == 0) {
				score = 0;
				break;
			}
			if (check[j] == 'O') {
				score += 1;
				sum += score;
			}
			else
				score = 0;
		}
		cout << sum << "\n";
		sum = 0;
	}
	return 0;
}