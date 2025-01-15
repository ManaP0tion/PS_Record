#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;
vector<int> depth; // 각 노드의 깊이를 저장
vector<int> visit_order; // 방문 순서를 저장
int visit_count = 1;

void dfs(int node) {
   for(int next : graph[node]){
        if(depth[next] == -1){
            depth[next] = depth[node]+1;
            visit_order[next] = visit_count++;
            dfs(next);
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

    for (int i = 1; i <= n; i++) 
        sort(graph[i].begin(), graph[i].end());
    
    depth[r] = 0;
    visit_order[r] = visit_count++;
    dfs(r);

    long long result = 0;
    for (int i = 1; i <= n; i++) {
        if (depth[i] != -1) { // 방문된 노드만 계산
            result += 1LL * depth[i] * visit_order[i];
        }
    }

    cout << result << endl;
}