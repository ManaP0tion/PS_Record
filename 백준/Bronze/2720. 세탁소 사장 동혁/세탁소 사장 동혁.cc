#include <iostream>
using namespace std;

int main() {
	int TestCount;
	cin >> TestCount;

	while (TestCount--) {
		int input, Quarter = 0, Dime = 0, Nickel = 0, Penny = 0;
		cin >> input;
		while (input) {
			if (input >= 25) {
				Quarter++;
				input -= 25;
			}
			else if (input >= 10) {
				Dime++;
				input -= 10;
			}
			else  if (input >= 5) {
				Nickel++;
				input -= 5;
			}
			else {
				Penny++;
				input--;
			}
		}
		cout << Quarter << " " << Dime << " " << Nickel << " " << Penny << "\n";
	}
}