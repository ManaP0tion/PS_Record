#include <iostream>
using namespace std;

int T, N;
int a[8][8];



void rotate(int before[8][8], int after[8][8], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			after[i][j] = before[n - 1 - j][i];
		}
	}
}

int main() {
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		cin >> N;
		for (int i = 0;i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> a[i][j];
			}
		}
		int rot90[8][8] = { 0 };
		int rot180[8][8] = { 0 };
		int rot270[8][8] = { 0 };

		rotate(a, rot90, N);
		rotate(rot90, rot180, N);
		rotate(rot180, rot270, N);

		cout << "#" << tc << "\n";
		for(int i = 0; i<N; i++){
		// 1. 90도 회전시킨값 
			for (int j = 0; j < N; j++)
				cout << rot90[i][j];
			cout << " ";
		// 2. 180도 회전시킨값
			for (int j = 0; j < N; j++) 
				cout << rot180[i][j];
			cout << " ";
		// 3. 270도 회전시킨값 
			for (int j = 0; j < N; j++) 
				cout << rot270[i][j];
			cout << "\n";
		}
	}
}