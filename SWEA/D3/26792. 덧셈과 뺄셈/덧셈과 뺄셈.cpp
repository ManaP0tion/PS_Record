#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 1; i<=tc; i++){
        int x, y, a, b;
        cin >> x >> y;
        a = (x+y)/2;
        b = (x-y)/2;

        cout << a << " " << b << "\n";

    }
}