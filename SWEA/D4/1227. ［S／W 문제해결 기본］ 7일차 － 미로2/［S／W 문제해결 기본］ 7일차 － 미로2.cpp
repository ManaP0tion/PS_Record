#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

int a[MAX][MAX];
bool visited[MAX][MAX];

int flag = 0;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void resetV(){
    flag = 0;
    for(int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            visited[i][j] = false;
        }
    }
}
/*
void dfs(int y, int x){
    if(a[y][x] == 3){
        flag = true;
        return;
    }
    visited[y][x] = true;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx<0||ny<0||nx>=MAX||ny>=MAX) continue;
        if(!visited[ny][nx] && a[ny][nx] != 1)
            dfs(ny, nx);
    }
    return;
}
*/

void bfs(int y, int x){
    queue<pair<int, int>> q;
    q.push({y, x});
    visited[y][x] = true;
    while(q.size()){
        tie(y, x) = q.front();
        q.pop();

        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx<0||ny<0||nx>=MAX||ny>=MAX) continue;
            if(!visited[ny][nx] && a[ny][nx] != 1){
                if(a[ny][nx] == 3)
                    flag = 1;
                visited[ny][nx] = true;
                q.push({ny, nx});
            }
                
        }
    }
    return;
}

int main(){
    int tc = 10;
    for(int t = 1; t<=tc; t++){
        resetV();
        int temp;
        int sy, sx;
        cin >> temp;
        // input
        for(int r=0; r<MAX; r++){
            for(int c=0; c<MAX; c++){
                scanf("%1d", &a[r][c]);
                if(a[r][c] == 2)
                {
                    sy = r;
                    sx = c;
                }
            }
        }
        bfs(sy, sx);

        cout << "#" << temp << " " << flag << "\n";
    }
}