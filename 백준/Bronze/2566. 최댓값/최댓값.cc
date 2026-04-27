#include <iostream>
using namespace std;

int main() {
	int array[9][9];
	int max = array[0][0] = {};
	int width = 0, height = 0;
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) 
				cin >> array[i][j];
		}

		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (array[i][j] > max) {
					max = array[i][j];
					width = i; height = j;
				}
			}
		}
		cout << max << endl;
		cout << width + 1 << " " << height + 1;
}