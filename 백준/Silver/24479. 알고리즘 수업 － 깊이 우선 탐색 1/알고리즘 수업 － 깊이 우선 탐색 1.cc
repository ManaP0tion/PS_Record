#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
vector<int> result;
int cnt = 1;
void dfs(int node){
    visited[node] = true;
    result[node] = cnt;
    cnt++;
    for(int next : graph[node]){
        if(!visited[next])
            dfs(next);
    }
}

int main(){
    int n, m, r;
    cin >> n >> m >> r;
    graph.resize(n+1);
    result.resize(n+1);
    visited.resize(n+1, false);

    int u, v;
    for(int i = 0; i<m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i<=n; i++)
        sort(graph[i].begin(), graph[i].end());

    dfs(r);

    for(int i = 1; i<=n; i++)
        cout << result[i] << "\n";
    
}