#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	int array[10001] = { 0, };
	
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		array[temp] += 1;
	}
	for (int i = 1; i <= 10000; i++)
		for (int j = 0; j < array[i]; j++)
			cout << i << "\n";
}