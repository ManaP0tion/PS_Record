#include <iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        cout << (a+b)*(a+b-1) * (a+b) / 2 << "\n";
    }
}