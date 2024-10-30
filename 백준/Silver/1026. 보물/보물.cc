#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int ans = 0;
    for(int i = 0; i<n; i++)
        cin >> a[i];
    for(int i = 0; i<n; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());
    for(int i = 0; i<n; i++){
        ans += a[i] * b[i];
    }
    cout << ans;
}