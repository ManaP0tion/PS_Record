#include <iostream>
#include <string>
using namespace std;

int main(){
    int numberOfCheck;
    int count = 0;
    string s;
    cin >> numberOfCheck;
    for(int i=0; i<numberOfCheck; i++){
        cin >> s;
        int size = s.length();
        bool Groupcheck = true;

        for(int j=0; j<size; j++){
            for(int k=0; k<j; k++){
                if(s[j] != s[j-1] && s[j] == s[k]){
                    Groupcheck = false;
                    break;
                }
            }
        }
        if(Groupcheck)
            count++;
    }
    cout << count;
    


    
}