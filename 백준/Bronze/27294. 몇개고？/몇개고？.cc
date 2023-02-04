#include <iostream>
using namespace std;

int main(){
    int T, S;
    cin >> T >> S;
    if(T<=16 && T>=12){ 
        if(S==1)        //점심시간이면서 술을 먹는 경우
            cout << 280;
        else if(S==0)   //점심시간이면서 술을 같이 먹지 않는 경우
            cout << 320;
    }
    else{
        cout << 280;
    }
}