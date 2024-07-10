#include <iostream>
using namespace std;

int getGCD(int a, int b){
    int temp;
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int getLCM(int a, int b){
    return (a*b) / getGCD(a,b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << getGCD(a, b) << "\n" << getLCM(a,b);
}