#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
vector<int> depth;

void dfs(int node, int currDepth){
    visited[node]= true;
    depth[node] = currDepth;
    

    for(int next : graph[node])
    {
        if(!visited[next])
            dfs(next, currDepth+1);
    }
}

int main(){
    int n, m, r;
    cin >> n >> m >> r;

    graph.resize(n+1);
    visited.resize(n+1, false);
    depth.resize(n+1, -1);

    int u, v;
    for(int i=0; i<m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 1; i <= n; i++)
        sort(graph[i].begin(), graph[i].end());

    dfs(r, 0);

    for(int i=1; i<=n; i++)
        cout << depth[i] << "\n";
}