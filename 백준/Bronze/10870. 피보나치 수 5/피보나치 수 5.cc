#include <iostream>
using namespace std;

int fibonacchi(int input){
    if(input == 0)
        return 0;
    if(input == 1)
        return 1;
    return fibonacchi(input - 2) + fibonacchi(input -1);
    
}

int main(){
    int n;
    cin >> n;
    cout << fibonacchi(n);
}