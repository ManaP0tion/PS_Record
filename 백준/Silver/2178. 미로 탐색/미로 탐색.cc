#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define MAX 101

int N , M;   // 미로 크기
char maze[MAX][MAX];
bool visited[MAX][MAX] = {false, };     // 해당 칸을 방문했는지의 여부를 저장
int count_visit[MAX][MAX] = {0, };      // 0,0 에서의 거리 표시를 위한 배열임

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


void bfs(int x, int y){
    visited[x][y] = true;
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));

    while(!q.empty()){
        int x= q.front().X;
        int y= q.front().Y;

        q.pop();

        for(int i=0; i<4; i++){
            int next_x = x + dx[i];
            int next_y = y + dy[i];

            if(0 <= next_x && next_x < N && 0 <= next_y && next_y < M ){
                if(maze[next_x][next_y] == '1' && visited[next_x][next_y] == false){
                    count_visit[next_x][next_y] = count_visit[x][y] + 1;
                    visited[next_x][next_y] = true;
                    q.push(make_pair(next_x, next_y));
                }
            }

        }
    }    
    
}

int main(){
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> maze[i];
    }

    bfs(0, 0);
    cout << count_visit[N-1][M-1] + 1;
}