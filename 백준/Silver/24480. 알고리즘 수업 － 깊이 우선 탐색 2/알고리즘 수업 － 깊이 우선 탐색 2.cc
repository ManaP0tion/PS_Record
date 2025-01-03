#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<int> result;
vector<bool> visited;

int cnt = 0;

void dfs(int node){
    visited[node] = true;
    cnt++;
    result[node] = cnt;

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

    for(int i = 0; i<m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i<=n; i++){
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }
    dfs(r);
    for(int i = 1; i<=n; i++)
        cout << result[i] << '\n';

}