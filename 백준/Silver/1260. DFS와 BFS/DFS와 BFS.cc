#include <iostream>
#include <queue>
using namespace std;

const int MAX = 1001;
queue<int> q;
int map[MAX][MAX];
bool visited[MAX];
int n, m, v_start;
void reset(){
    for(int i = 1; i<=MAX; i++){
        visited[i] = false;
    }
}

void DFS(int v){
    visited[v] = true;
    cout << v << " ";

    for(int i = 1; i<= n; i++){
        if(map[v][i] == 1 && !visited[i]) // 연결되어있고, 방문한적 없는경우
        {
            DFS(i);
        } 
    }
}

void BFS(int v){
    q.push(v);
    visited[v] = true;
    cout << v << " ";

    while(!q.empty()){
        v = q.front();
        q.pop();

        for(int i=1; i<=n; i++){
            if(map[v][i] == 1 && !visited[i]){
                q.push(i);
                visited[i] = true; 
                cout << i << " ";
            }
        }
    }

}

int main(){
    cin >> n >> m >> v_start;

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    reset();
    DFS(v_start);
    reset();
    cout << "\n";
    BFS(v_start);
    
}