#include <iostream>
using namespace std;

int arr[10];
bool visited[10];
int N, M;

void dfs(int num, int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = num; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[cnt] = i;
			dfs(i + 1, cnt + 1);
			visited[i] = false;
		}
	}

}

int main() {
	cin >> N >> M;
	dfs(1, 0);
}