#include <iostream>
#include <string>
using namespace std;

char c[] = {'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U' };

int main(){
    string s;
    
    while(1){
        int ans = 0;
        getline(cin, s);
        if(s == "#")
            break;
        for(int i = 0 ; i<s.length(); i++)
        {
            for(int j=0; j<10; j++){
                if(s[i] == c[j]){
                    ans++;
                    break;
                }

            }
        }
        cout << ans << endl;
    }
}