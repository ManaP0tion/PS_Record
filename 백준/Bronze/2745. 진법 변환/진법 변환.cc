#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    string s;
    int n;
    cin >> s >> n;

    int ans = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9')
            ans = ans*n + (s[i] - '0');
        else
            ans = ans*n + (s[i] - 'A' + 10);
    }
    cout << ans;
}