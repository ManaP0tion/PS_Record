#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num;
	int ConvertBit;
	string changed_num;
	cin >> num >> ConvertBit;

	while (num != 0) {
		int tmp = num % ConvertBit;
		if (tmp > 9) {
			tmp = tmp  - 10 + 'A';
			changed_num += tmp;
		}
		else {
			changed_num += '0' + tmp;
		}
		num /= ConvertBit;
	}
	reverse(changed_num.begin(), changed_num.end());
	cout << changed_num;
}