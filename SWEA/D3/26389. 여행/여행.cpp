#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i=0; i<tc; i++){
        string route;
        cin >> route;
        bool w = false, e = false, n = false, s = false;
    
        for(int i = 0; i<route.length(); i++){
            if(route[i] == 'W') w = true;
            else if(route[i] == 'E') e = true;
            else if(route[i] == 'N') n = true;
            else if(route[i] == 'S') s = true;
        }

        if((e&&!w)||(!e&&w)||(!n&&s)||(n&&!s) )
            cout << "No" << "\n";
        else
            cout << "Yes" << "\n";
    }
}