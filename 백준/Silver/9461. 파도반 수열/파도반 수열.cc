#include <iostream>
using namespace std;

long long dp[101] = {0, };

void FASTIO(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){

    FASTIO();
    int t, n;
    cin >> t;

    dp[1]= dp[2] = dp[3] = 1;
    dp[4] = dp[5] = 2;

    for(int i = 6; i<= 101; i++){
        dp[i] = dp[i-1] + dp[i-5];
    }

    for(int i = 0; i<t; i++){
        cin >> n;
        cout << dp[n] << "\n";
    }

}
