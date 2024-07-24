#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int input, ans;
    while(1){
        cin >> input;
        if(input == 0)
            break;
        ans = 0;
        for(int i = 1; i<=input; i++){
            ans += pow(i, 2);
        }
        cout << ans << "\n";
    }
}