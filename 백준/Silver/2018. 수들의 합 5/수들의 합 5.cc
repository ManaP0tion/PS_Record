#include <iostream>
using namespace std;

int sum = 0;
int ans = 0;
int main(){
    int start = 1;
    int end = 1;
    int n;
    cin >> n;

    while(start <= n && end <= n){
        if(sum < n){ 
            sum += end;
            end++;
        }

        else{
            if(sum == n) 
                ans++;
            sum -= start;
            start++;
        }
    }
    cout << ans + 1;
}