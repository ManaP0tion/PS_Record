#include <iostream>
using namespace std;

int main(){
    int a, b, ans;
    cin >> a >> b;
    if (a>10) ans = 24-a+b;
    else ans = b-a;
    cout << ans;
}