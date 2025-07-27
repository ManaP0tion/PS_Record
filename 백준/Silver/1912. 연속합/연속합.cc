#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001], dp[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i<n; i++)
        cin >> arr[i];

    int ans = -1e9;

    for(int i=0; i<n; i++)
    {
        dp[i] = max(arr[i], dp[i-1] + arr[i]);
        ans = max(ans, dp[i]);
    }
    cout << ans;
    
}

