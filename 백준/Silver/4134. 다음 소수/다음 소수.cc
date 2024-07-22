#include <iostream>
using namespace std;
typedef long long ll;


bool isPrime(ll n){
    if(n<2) return false;
    for(ll i = 2; i*i<=n; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}


int main(){
    ll n, input;
    cin >> n;
    for(ll i=0; i<n; i++){
        cin >> input;
        while(!isPrime(input)){
            input++;
        }
        cout << input << endl;
    }
}