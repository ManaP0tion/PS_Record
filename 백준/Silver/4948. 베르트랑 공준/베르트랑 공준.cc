#include <iostream>

using namespace std;

const int MAX = 123456*2;
bool arr[MAX+1] = {false, };

bool isPrime(int n){
   
    if(n < 2 )  return false;
    for(int i = 2; i*i<= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    while(true){
        int n;
        cin >> n;
        if(n==0)    break;
        int ans = 0;
        for(int i = n+1; i<=2*n; i++){
            if(isPrime(i) == true)
                ans++; 
        }
        cout << ans << "\n";
    }
}


