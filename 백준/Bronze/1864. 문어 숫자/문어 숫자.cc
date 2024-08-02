#include <iostream>
#include <string>
#include <map>
#include <cmath>
using namespace std;

int main(){
    map<char, int> m;
    m['-'] = 0, m['\\'] = 1, m['('] = 2, m['@'] = 3;
    m['?'] = 4, m['>'] = 5, m['&'] = 6, m['%'] = 7;
    m['/'] = -1;

    string s;
    int ans = 0;
    while(1){
        ans = 0;
        cin >> s;
        if(s == "#")
            break;
        int size = s.length();
        for(int i = 0; i<size; i++)
            ans += pow(8, size-i-1)*(m[s[i]]); 
        cout << ans << endl;
    }
}