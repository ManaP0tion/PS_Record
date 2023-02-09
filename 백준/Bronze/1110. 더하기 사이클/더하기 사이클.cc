#include <iostream>
using namespace std;

int main() {
	int num;
	int num_changed;
	int count = 0;

	cin >> num;
	num_changed = num;

	do {
		num_changed = (num_changed % 10) * 10 + ((num_changed / 10) + (num_changed % 10)) % 10;
		count++;

	} while (num != num_changed);

	cout << count;
}