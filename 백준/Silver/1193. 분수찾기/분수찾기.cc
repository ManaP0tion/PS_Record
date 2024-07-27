#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    int k = 1;
    while(1){
        if((k-1)*k/2 < x && x <= k*(k+1)/2)
            break;
        k++;
    }
    int a = k*(k+1)/2;
    if(k % 2)
        cout << a-x+1 << "/" << k-(a-x);
    
    else
        cout << k-(a-x) << "/"<<a-x+1;

}
