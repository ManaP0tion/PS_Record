// knapsacka문제임

#include <bits/stdc++.h>
using namespace std;

int score[21];
int cal[21];
int dp[10001];

int T, N, L;

int main(){
    cin >> T;
    for(int tc = 1; tc<=T; tc++){
        cin >> N >> L;
        for(int i = 1; i<=N; i++)
            cin >> score[i] >> cal[i];
        memset(dp, 0, sizeof(dp));

        for(int i = 1; i<=N; i++){
            for(int j = L; j>=cal[i]; j--){
                dp[j] = max(dp[j], dp[j - cal[i]] + score[i]);
            }
        }
        cout << "#" << tc << " " << dp[L] << "\n";
    }
}