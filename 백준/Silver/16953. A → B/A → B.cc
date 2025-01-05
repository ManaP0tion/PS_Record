#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int cnt = 1;

    while(1){
        if(a == b)
            break;
        
        else if(a > b){
            cnt = -1;
            break;
        }

        if(b%2 == 0)
            b /= 2;
        else if(b % 10 == 1){
            b = (b - 1)/10; 
        }

        else{
            cnt = -1;
            break;
        }
        cnt++;
    }
    cout << cnt;
}