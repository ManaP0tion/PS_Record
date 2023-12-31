#include <iostream>
using namespace std;
int arr[41] = {0, };
int dp = 0, recursive = 0;

int fib_dp(int n){              // dp
    arr[1] = arr[2] = 1;
    for(int i = 3; i<=n; i++){
        dp++;
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}

int fib_recursive(int n){       // 재귀
    
    if(n == 1 || n == 2){
        recursive++;
        return 1;
    }
    else
        return fib_recursive(n-1) + fib_recursive(n-2);
}
int main(){
    int n;
    cin >> n;
    fib_dp(n);
    fib_recursive(n);

    cout << recursive << " " << dp;
}
