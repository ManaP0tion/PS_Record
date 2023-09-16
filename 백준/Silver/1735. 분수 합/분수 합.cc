#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a%b == 0){
        return b;
    }
    else{
        return gcd(b, a%b);
    }
}


int main(){
    int u1, u2, d1, d2;
    cin >> u1 >> d1 >> u2 >> d2;
    
    
    int upper_final = (u1*d2) + (u2*d1);
    int lower_final = d1*d2;
    int g = gcd(upper_final, lower_final);

    upper_final /= g;
    lower_final /= g;
    cout << upper_final << " " << lower_final << "\n";
}