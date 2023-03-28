#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	stack<int> s;
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		if (str == "pop") {
			if (!s.empty()) {
				cout << s.top() << endl;
				s.pop();
			}
			else
				cout << "-1" << endl;
		}
		if (str == "size")
			cout << s.size() << endl;
		if (str == "empty") {
			if (s.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		if (str == "top") {
			if (!s.empty())
				cout << s.top() << endl;
			else
				cout << "-1" << endl;
		}
	}
}
