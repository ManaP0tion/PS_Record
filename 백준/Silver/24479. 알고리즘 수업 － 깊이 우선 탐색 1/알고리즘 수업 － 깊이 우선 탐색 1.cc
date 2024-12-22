#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> g[100001];
int visited[100001] = {0, };
int result[100001];
int cnt = 0; 

void dfs(int r){
    if(visited[r] == 1)
        return;

    visited[r] = 1;
    cnt++;
    result[r] = cnt;

    for(int i = 0; i<g[r].size(); i++){
        dfs(g[r][i]);
    }
}


int main(){
    int n, m, r;
    cin >> n >> m >> r;
    int a,b;
    for(int i = 1; i<=m; i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i = 1; i<=n; i++)
        sort(g[i].begin(), g[i].end());
    
    dfs(r);

    for(int i = 1; i<=n; i++){
        cout << result[i] << "\n";
    }
    
}