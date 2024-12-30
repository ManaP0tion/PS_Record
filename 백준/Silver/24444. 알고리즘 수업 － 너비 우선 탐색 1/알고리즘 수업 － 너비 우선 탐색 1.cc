#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<int> visit_order;

int order = 1;

void bfs(int start){
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
    int N, M, R;
    cin >> N >> M >> R;

    graph.resize(N+1);
    visit_order.resize(N+1, 0);
    int u, v;
    for(int i=0; i<M; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1; i<=N; i++){
        sort(graph[i].begin(), graph[i].end());
    }
    bfs(R);

    for(int i = 1; i<= N; i++){
        cout << visit_order[i] << "\n";
    }
}