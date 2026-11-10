#include <bits/stdc++.h>
using namespace std;


int N;

int T, nx, ny;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

int main(){
    cin >> T;
    
    for(int tc = 1; tc<=T; tc++){
        int x = 0, y = 0, idx = 0;
        int mat[11][11] = {0, };
        cin >> N;
        for(int i = 1; i<= N*N; i++){
            mat[y][x] = i;
            ny = y + dy[idx];
            nx = x + dx[idx];

            if( !((0<=nx && nx<N)&&(0<=ny && ny<N)) || mat[ny][nx] !=0 )
            {
                idx = (idx+1)%4;
                nx = x + dx[idx];
                ny = y + dy[idx];
            }
            x = nx, y = ny;
        }
        cout << "#" << tc << "\n";
        for(int r=0; r<N; r++){
            for(int c=0; c<N; c++){
                cout << mat[r][c] << " ";
            }
            cout << endl;
        }
    }
}