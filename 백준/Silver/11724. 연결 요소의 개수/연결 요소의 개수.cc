    #include <iostream>
    #include <vector>
    #include <queue>
    using namespace std;

    vector<vector<int>> graph;
    vector<bool> visited;

    int cnt = 0;

    void bfs(int start){
        queue<int> q;
        q.push(start);
        visited[start] = true;

        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(int next : graph[curr]){
                if(!visited[next]){
                    q.push(next);
                    visited[next] = true;
                }
            }
        }
    }

    int main(){

        int n, m;
        cin >> n >> m;

        graph.resize(n+1);
        visited.resize(n+1, false);
        int u, v;
        for(int i=0; i<m; i++){
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        for(int i=1; i<=n; i++){
            if(!visited[i]){
                bfs(i);
                cnt++;
            }
        }
    cout << cnt;
}