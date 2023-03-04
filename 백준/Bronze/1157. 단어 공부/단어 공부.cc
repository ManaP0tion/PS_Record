#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	int num[26] = { 0, };

	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
		num[s[i] - 65]++;
	}

	int max = 0;
	int index = -1;

	for (int i = 0; i < 26; i++) {
		if (max < num[i]) {
			max = num[i];
			index = i;
		}
	}
	
	for (int i = 0; i < 26; i++) {
		if (i == index)
			continue;
		if (num[i] == max) {
			cout << '?';
			return 0;
		}
	}

	cout << (char)(index + 'A');
	return 0;
}