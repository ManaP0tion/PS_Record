#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> graph;
vector<int> depth_cnt;


void bfs(int start){
    queue<int> q;
    q.push(start);
    depth_cnt[start] = 0;

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int next : graph[curr]){
            if(depth_cnt[next] == -1){
                depth_cnt[next] = depth_cnt[curr] + 1;
                q.push(next);
            }
        }
    }
}

int main(){
    int n, m, r;
    cin >> n >> m >> r;

    graph.resize(n+1);
    depth_cnt.resize(n+1, -1);
    
    int u, v;

    for(int i=0; i<m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    bfs(r);
    for(int i = 1; i<=n; i++){
        cout << depth_cnt[i] << "\n";
    }

}