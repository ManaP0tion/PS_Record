#include <iostream>
using namespace std;


int dp[13];
int plan[13];

int main(){
    int T;
    int day, month, quarter, year;
    int answer = 0;
    cin >> T;
    for(int tc = 1; tc<=T; tc++){
        int cost = 0;
        cin >> day >> month >> quarter >> year;
        for(int i = 1; i<=12; i++)
            cin >> plan[i];

        dp[0] = 0;
        for(int i = 1; i<=12; i++){
            dp[i] = dp[i-1] + min(day*plan[i], month);
        
            dp[i] = min(dp[i], dp[max(0, i-3)] + quarter);

        }

        answer = min(dp[12], year);
        cout << "#" << tc << " " << answer << endl;
    }
}