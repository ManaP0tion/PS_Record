#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
vector<int> depth; // 각 노드의 깊이를 저장
vector<int> visit_order; // 방문 순서를 저장
int visit_count = 1;

void bfs(int start) {
    queue<int> q;
    q.push(start);
    depth[start] = 0; // 시작 노드의 깊이는 0
    visit_order[start] = visit_count++; // 시작 노드의 방문 순서

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        // 인접 노드를 오름차순으로 방문
        sort(graph[curr].begin(), graph[curr].end());
        for (int next : graph[curr]) {
            if (depth[next] == -1) { // 방문하지 않은 노드
                depth[next] = depth[curr] + 1; // 깊이를 현재 노드 깊이 + 1로 설정
                visit_order[next] = visit_count++; // 방문 순서 설정
                q.push(next);
            }
        }
    }
}

int main() {
    int n, m, r;
    cin >> n >> m >> r;

    graph.resize(n + 1);
    depth.resize(n + 1, -1); // -1로 초기화
    visit_order.resize(n + 1, 0); // 0으로 초기화

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(r);

    long long result = 0;
    for (int i = 1; i <= n; i++) {
        if (depth[i] != -1) { // 방문된 노드만 계산
            result += 1LL * depth[i] * visit_order[i];
        }
    }

    cout << result << endl;

    return 0;
}