#include <bits/stdc++.h>
using namespace std;

int adj[11][11] = {0 ,};
bool visited[11];
int T, N, M;
int ans;

void dfs(int idx, int cnt){
    if(cnt > ans){
        ans = cnt;
    }

    for(int i = 1; i<=N; i++){
        if(adj[idx][i] && !visited[i]){
            visited[i] = true;
            dfs(i, cnt+1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> T;
    for(int tc = 1; tc <= T; tc++){
        cin >> N >> M;
        memset(adj, 0, sizeof(adj));
        memset(visited, 0, sizeof(visited));
        ans = 0;

        for(int j = 0; j < M; j++){
            int from, to;
            cin >> from >> to;
            adj[from][to] = 1;
            adj[to][from] = 1;
        }

        for(int j = 1; j <= N; j++){
            visited[j] = true;
            dfs(j, 1);
            visited[j] = false;
        }

        cout << "#" << tc << " " << ans << "\n";
    }
}