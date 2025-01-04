#include <iostream>
#include <vector>
#define MAX 1000001
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
vector<int> parent;

void dfs(int node){
    visited[node] = true;
    for(int next : graph[node]){
        if(!visited[next]){
            parent[next] = node;
            dfs(next);
        }
    }
}

int main(){
    int n;
    cin >> n;
    int u, v;
    graph.resize(n+1);
    parent.resize(n+1);
    visited.resize(n+1, false);

    for(int i = 0; i<n; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1);
    for(int i=2; i<=n; i++)
        cout << parent[i] << "\n";   
}