#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    int lr = 0, sk = 0;
    int ans = 0;
    string s;

    cin >> n >> s;

    for(int i = 0; i<n; i++){
        if(isdigit(s[i]))   ans+=1;
        
        if(s[i] == 'L')
            lr+=1;
        
        else if (s[i] == 'R'){
            if(lr>0){
                lr--;
                ans++;
            }
            else
                break;
        }

        else if(s[i] == 'S')
            sk+=1;

        else if(s[i] == 'K'){
            if(sk>0){
                sk--;
                ans++;
            }
            else
                break;
        }   
    }
    cout << ans;
}