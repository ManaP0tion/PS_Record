#include <iostream>
typedef long long ll;
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a, b;
    while(1){
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        if(b > a-b) b = a-b;
        ll ans = 1;
        for(int i = 1; i<=b; i++){
            ans = ans*(a-i+1) / i;
        }
        cout << ans << "\n";
    }
}