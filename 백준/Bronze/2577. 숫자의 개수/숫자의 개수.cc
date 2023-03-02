#include <iostream>
using namespace std;

int main(){
    int A, B, C, Mul;
    int count[10] = {};

    cin >> A >> B >> C;
    Mul = A*B*C;

    while(Mul != 0){
        count[Mul % 10]++;
        Mul /= 10;
    }

    for(int i=0; i<=9; i++){
        cout << count[i] << "\n";
    }
}