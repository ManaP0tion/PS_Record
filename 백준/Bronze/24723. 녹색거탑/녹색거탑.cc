#include <iostream>
using namespace std;

int main(){
    int input;
    cin >> input;
    int ans = 1;
    while(input--){
        ans*=2;
    }
    cout << ans;
}