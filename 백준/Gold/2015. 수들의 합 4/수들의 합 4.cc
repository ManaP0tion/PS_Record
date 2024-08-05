#include <iostream>
#include <map>
typedef long long ll;
using namespace std;

int arr[200001];
ll ans = 0;

int main(){
    ll n, k, num;
    cin >> n >> k;
    map<int, ll> m;
    m[0] = 1;
    for(ll i = 1; i<= n; i++){
        cin >> num;
        arr[i] = arr[i-1] + num;
        ans += m[arr[i]-k];
        m[arr[i]]++;
    }
    cout << ans;


}