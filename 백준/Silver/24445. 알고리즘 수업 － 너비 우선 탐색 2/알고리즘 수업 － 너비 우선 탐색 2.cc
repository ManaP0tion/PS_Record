#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<int> visit_order;
int order = 1;

void dfs(int start){
    queue<int> q;
    q.push(start);
    visit_order[start] = order++;

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int next : graph[curr]){
            if(visit_order[next] == 0){
                visit_order[next] = order++;
                q.push(next);
            }
        }
    }
}

int main(){
    int n, m, r;
    cin >> n >> m >> r;

    graph.resize(n+1);
    visit_order.resize(n+1);
    int u, v;
    for(int i = 0; i<m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=1; i<=n; i++)
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    
    dfs(r);
    for(int i=1; i<=n; i++){
        cout << visit_order[i] << "\n";
    }
}
