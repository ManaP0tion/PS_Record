#include<vector>
#include<iostream>
#include <queue>
using namespace std;
int visited[101][101];

int ans;
// 동서남북 반영
int dy[4] = {0, 0, 1, -1};
int dx[4] = {1, -1, 0, 0};

int bfs(int y, int x, vector<vector<int> > maps){
    
    int m = maps.size();
    int n = maps[0].size();
    visited[y][x] = 1;
    queue<pair<int, int>> q;
    q.push({y,x});
    
    while(q.size()){
        tie(y, x) = q.front();
        q.pop();
        
        for(int i = 0 ; i<4; i++){
            int ny = y+dy[i];
            int nx = x+dx[i];
            
            if(ny<0||nx<0||ny>=m|| nx>=n) continue;
            if(!visited[ny][nx] && maps[ny][nx] != 0){
                visited[ny][nx] = visited[y][x] + 1;
                q.push({ny, nx});
                if(ny == m-1 && nx == n-1)
                    return visited[ny][nx];
            }
        }
    }
    return -1;
}



int solution(vector<vector<int> > maps){
    return bfs(0, 0, maps);
}
