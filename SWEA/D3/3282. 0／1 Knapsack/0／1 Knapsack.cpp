#include <iostream>
#include <cmath>
using namespace std;

int dp[101][1001];
int v[101];
int c[101];

int main(){
    int T;
    cin >> T;
    for(int tc = 1; tc<=T; tc++){
        int N, K;
        cin >> N >> K;

        for(int i = 1; i<=N; i++){
            cin >> v[i] >> c[i];
        }

        for(int i = 1; i<=N; i++){
            for(int k =0; k<=K; k++){
                // 안 넣음
                dp[i][k] = dp[i-1][k];
                if(v[i] <= k){
                    dp[i][k] = max(dp[i-1][k], dp[i-1][k-v[i]] + c[i]);
                }
            }
        }
        cout << "#" << tc << " " << dp[N][K] << "\n";
    }
}