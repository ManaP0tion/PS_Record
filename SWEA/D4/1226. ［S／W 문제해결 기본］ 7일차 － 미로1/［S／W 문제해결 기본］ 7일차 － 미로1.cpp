#include <bits/stdc++.h>
using namespace std;

int a[16][16];
bool visited[16][16];

int flag = 0;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void resetV(){
    flag = 0;
    for(int i=0; i<16; i++){
        for(int j=0; j<16; j++){
            visited[i][j] = false;
        }
    }
}

void dfs(int y, int x){
    if(a[y][x] == 3){
        flag = true;
        return;
    }
    visited[y][x] = true;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx<0||ny<0||nx>=16||ny>=16) continue;
        if(!visited[ny][nx] && a[ny][nx] != 1)
            dfs(ny, nx);
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
        for(int r=0; r<16; r++){
            for(int c=0; c<16; c++){
                scanf("%1d", &a[r][c]);
                if(a[r][c] == 2)
                {
                    sy = r;
                    sx = c;
                }
            }
        }
        dfs(sy, sx);

        cout << "#" << temp << " " << flag << "\n";
    }
}