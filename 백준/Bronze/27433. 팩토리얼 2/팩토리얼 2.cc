#include <iostream>
using namespace std;

int main(){
    long long n, ans = 1;
    cin >> n;
    for(long long i = 2; i<=n; i++)
        ans*= i;
    
    cout << ans;
}