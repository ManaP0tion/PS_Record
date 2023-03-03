#include <iostream>
using namespace std;

int main(){
    int M, S, total = 0;
    for(int i=0; i<4; i++){
        int input;
        cin >> input;
        total += input;
    }
    M = total/60;
    S = total%60;

    cout << M << "\n" << S;
}