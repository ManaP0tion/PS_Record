#include <iostream>
using namespace std;

int main(){
    int cnt = 0;
    int n;
    int sub = 1;
    cin >> n;

    while(n>0){
        if(n-sub<0)
            sub = 1;
        n -= sub;
        sub++;
        cnt++;
    }
    cout << cnt;
}