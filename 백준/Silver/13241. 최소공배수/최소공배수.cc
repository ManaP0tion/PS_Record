#include <iostream>
using namespace std;
int GCD(int a, int b){      // 최대공약수
    
    if(b==0)
        return a;
    return GCD(b, a%b);
}

int main(){
    long long int a, b;
    cin >> a >> b;
    long long int result = a*b/GCD(a, b);
    cout << result;
    
}