#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

const int MAX = 101;

int N;

// 높이정보 배열
int arr[MAX][MAX];
// 방문체크
bool visited[MAX][MAX];

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };


void dfs(int y, int x, int depth) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || nx >= N || ny >= N) continue;
		if (!visited[ny][nx] && arr[ny][nx] > depth) {
			dfs(ny, nx, depth);
		}
	}
}

int main() {
	cin >> N;
	int maxHeight = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
			maxHeight = max(maxHeight, arr[i][j]);
		}
	}
	int ans = 1;
	int cnt = 0;
	for (int h = 0; h < maxHeight; h++) {
		fill(&visited[0][0], &visited[0][0] + MAX * MAX, false);
		cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (!visited[i][j] && arr[i][j] > h) {
					dfs(i, j, h);
					cnt++;
				}
			}
		}
		ans = max(cnt, ans);
	}
	cout << ans;
}