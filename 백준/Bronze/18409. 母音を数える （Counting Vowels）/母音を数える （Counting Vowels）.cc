#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i<n; i++){
        if(s[i] == 'a' || s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u')
            cnt++;
   
    }
    cout << cnt;
}