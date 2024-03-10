#include <iostream>
using namespace std;

typedef long long ll;

ll factorial(ll n){
    ll num = 1;
    for(int i=1; i<=n; i++)
        num *= i;
    
    return num;
}

int main(){
    ll input;
    cin >> input;
    input = factorial(input);
    ll div = 7 * 24 * 60 * 60;
    cout << input / div << "\n";
}