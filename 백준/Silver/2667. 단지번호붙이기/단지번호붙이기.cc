#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

bool visited[26][26] = {false, };
int map[26][26];
int cnt = 0;
int n;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int row, int col){
    visited[row][col] = true;
    cnt++;
    for(int i=0; i<4; i++){
        int x = row+dx[i];
        int y = col+dy[i];
        if(x<0 || y<0 || x >= n || y >= n)  continue;

        if(!visited[x][y] && map[x][y] == 1){
            dfs(x, y);
        }
    }
    
}

int main(){
    cin >> n;
    string s;
    // 맵 정보 입력
    for(int i = 0; i<n; i++){
        cin >> s;
        for(int j = 0; j<n; j++){
            map[i][j] = s[j] - '0';
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(!visited[i][j] && map[i][j] == 1){
                cnt = 0;
                dfs(i, j);
                v.push_back(cnt);
            }
        }
    }

    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << "\n";
    }
}