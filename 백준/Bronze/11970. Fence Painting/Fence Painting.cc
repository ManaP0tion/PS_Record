#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if(c >= b || a >= d)
        cout << (b - a) + (d-c);
    else
        cout << max(b,d) - min(a, c);
    
}