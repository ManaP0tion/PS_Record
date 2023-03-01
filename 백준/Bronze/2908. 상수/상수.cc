#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int rev(int n) {
	string s = to_string(n);
	reverse(s.begin(), s.end());
	return atoi(s.c_str());
}

int main() {
	int A, B;
	cin >> A >> B;
	A = rev(A);
	B = rev(B);
	if (A > B)
		cout << A;
	else if (A < B)
		cout << B;
	
	return 0;
}