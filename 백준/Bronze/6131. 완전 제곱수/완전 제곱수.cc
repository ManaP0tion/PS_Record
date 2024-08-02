#include <iostream>
using namespace std;

int main(){
    int cnt = 0;
    int n;
    cin >> n;
    for(int b = 1; b<=500; b++){
        for(int a = b; a<=500; a++){
            if(a*a == b*b+n){
                cnt++;
            }
        }
    }
    cout << cnt;
}