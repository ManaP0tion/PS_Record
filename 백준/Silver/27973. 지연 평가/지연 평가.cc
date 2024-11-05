#include <iostream>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t;
    ll cmd, val;
    ll ans = 1, bias= 1;
    cin >> t;
    while(t--){
        cin >> cmd;
        if(cmd < 3)
            cin >> val;
        switch(cmd){
            case 0:
                ans += val;
                break;
            case 1:
                ans *= val;
                bias *= val;
                break;
            case 2:
                ans += bias * val;
                break;
            case 3:
                cout << ans << "\n";
                break;
        }
    }
}