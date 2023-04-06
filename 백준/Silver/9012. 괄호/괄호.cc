#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	int k;
	cin >> k;
	
	while (k > 0) {
		k--;
		string input;
		cin >> input;

		stack<char> BracketCheck;
		string answer = "YES";
		for (int i = 0; i < input.length(); i++) {
			
			if (input[i] == '(') {
				BracketCheck.push(input[i]);
			}
			
			else if (!BracketCheck.empty() && input[i] == ')' && BracketCheck.top() == '(') {
				BracketCheck.pop();
			}
			
			else {
				answer = "NO";
				break;
			}
		}
		
		if (!BracketCheck.empty()) answer = "NO";

		cout << answer << endl;
	}
	return 0;
}