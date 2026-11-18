#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
bool visited[100];
bool ans;
int adj[100][2];
int dummy, n;

int T = 10;

void reset(){
    memset(visited, false, sizeof(visited));
    memset(adj, -1, sizeof(adj));
    ans = false;
}

void dfs(int node)
{
    if(node == 99){
        ans = true;
    }

    visited[node] = true;
    for(int i=0; i<2; i++){
        int next = adj[node][i];
        if(next != -1 && !visited[next])
            dfs(next);
    }
}

int main()
{
    for(int tc = 1; tc<=T; tc++){
        reset();
        cin >> dummy >> n;
        
        for(int i = 0; i<n; i++){
            int from, to;
            cin >> from >> to;

            // 0번칸이 비었다면 거기에 넣고
            if(adj[from][0] == -1) adj[from][0] = to;
            
            // 아니라면 1번칸에 넣자
            else adj[from][1] = to;
        }
        dfs(0);
        cout << "#" << tc << " " << ans << '\n';
    }
}