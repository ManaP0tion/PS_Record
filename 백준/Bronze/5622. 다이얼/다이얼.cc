#include <iostream>
#include <string>
using namespace std;

int main() {
	int dial[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int total = 0;
	string s;
	getline(cin, s);

	for (int i = 0; s[i] != '\0'; i++) 
		total += dial[s[i] - 'A'];
	
	cout << total;
}