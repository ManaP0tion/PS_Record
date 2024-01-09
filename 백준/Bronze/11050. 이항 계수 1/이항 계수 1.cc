#include <iostream>
using namespace std;

int factorial(int n){
    int result = 1;
    for(int i = 1; i<=n; i++){
        result *= i;
    }
    return result;
}

int main(){
    int n, r;
    cin >> n >> r;
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    cout << a/(b*c);
}

