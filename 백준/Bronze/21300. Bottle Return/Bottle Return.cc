#include <iostream>
using namespace std;


int main(){
    int ans = 0;
    int temp;
    for(int i=0; i<6; i++){
        cin >> temp;
        ans += temp *5;
    }
    cout << ans;
}