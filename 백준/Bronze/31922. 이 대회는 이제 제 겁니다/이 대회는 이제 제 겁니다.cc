#include <iostream>
using namespace std;

int main(){
    int a, b, p;
    cin >> a >> b >> p;
    if(a+p >= b)
        cout << a+p;
    else
        cout << b;
}