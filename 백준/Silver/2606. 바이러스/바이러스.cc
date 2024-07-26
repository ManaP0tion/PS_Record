#include <iostream>
#include <vector>
using namespace std;

int virus[101];
vector<int> graph[101];
int ans = 0;
void dfs(int x){
    for(int i=0;i<graph[x].size(); i++){
        int a = graph[x][i];

        if(virus[a] == 0){
            virus[a] = 1;
            ans++;
            dfs(a);
        }

    }
}

int main(){
    int n;      // 컴퓨터의 개수
    int pair;    // 직접 연결된 간선
    int a, b;

    cin >> n >> pair;
    for(int i=0; i<pair; i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    virus[1] = 1;
    dfs(1);
    cout << ans;
}