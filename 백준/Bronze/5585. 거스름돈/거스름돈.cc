#include <iostream>
using namespace std;

int main(){
    int ans = 0;
    int changes[] = {500, 100, 50, 10, 5, 1};
    int input;

    cin >> input;
    int left = 1000 - input;
    for(int i = 0; i<6; i++){
        while(left >= changes[i]){
            left -= changes[i];
            ans++;
        }
    }

    cout << ans;
}