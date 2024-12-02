#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cost[21],  point[21];
    int dp[101] = {0};
    for(int i = 0; i<n; i++)
        cin >> cost[i];
    for(int i = 0; i<n; i++)
        cin >> point[i];

    for(int i = 0; i<n; i++){
        for(int j=100; j>=cost[i]; j--)
            dp[j] = max(dp[j], dp[j - cost[i]] + point[i]);
    }

    cout << dp[99];
}