#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX = 101;

int arr[MAX][MAX];
int visited[MAX][MAX];

int N, M, K;
int s_x, s_y, e_x, e_y;

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };

int bfs(int y, int x) {
	queue<pair<int, int>> q;
	q.push({ y, x });
	visited[y][x] = 1;
	int area = 1;
	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= M || nx >= N) continue;
			if (!visited[ny][nx] && arr[ny][nx] != 1)
			{
				q.push({ ny, nx });
				visited[ny][nx] = 1;
				area++;
			}
		}
	}
	return area;
}

int main() {
	cin >> M >> N >> K;
	for (int i = 0; i < K; i++) {
		cin >> s_x >> s_y >> e_x >> e_y;
		for (int y = s_y; y < e_y; y++) {
			for (int x = s_x; x < e_x; x++) {
				arr[y][x] = 1;
			}
		}
	}

	vector<int> ans;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 0 && !visited[i][j]) {
				ans.push_back(bfs(i, j));
			}
				
		}
	}

	sort(ans.begin(), ans.end());
	cout << ans.size() << "\n";
	for (int item : ans)
		cout << item << " ";
}