#include <iostream>
#include<vector>
using namespace std;

int T, N;
int ans;

bool col[11];
bool diag1[22], diag2[22];

void dfs(int level){
    if(level == N)
    {
        ans++;
        return;
    }

    for(int c = 0; c<N; c++){
        // 같은열, 같은 대각선 체크
        if(col[c] || diag1[level + c] || diag2[level - c + N - 1]) continue;

        // 퀸 두기
        col[c] = diag1[level+c] = diag2[level-c+N-1] = true;
        dfs(level+1);

        // 원복
        col[c] = diag1[level+c] = diag2[level-c+N-1] = false;
    }

}


int main(){
    cin >> T;
    for(int tc = 1; tc<=T; tc++){
        cin >> N;
        ans = 0;
        dfs(0);
        cout << "#"<< tc<< " " << ans << "\n";
    }

}