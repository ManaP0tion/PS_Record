#include <iostream>
using namespace std;

int main(){
    
    int num, ans = 0;
    for(int i=0; i<5; i++){
        cin >> num;
        ans += num*num;
    }
    cout << ans % 10;
}