#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

int TC;
int A, B;

int main() {
	cin >> TC;
	for (int t = 1; t <= TC; t++) {
		cin >> A >> B;
		cout << "#" << t << " " << (A + B) % 24 << "\n";
	}
}