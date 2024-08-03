#include <vector>
#include <iostream>
using namespace std;

int ans = 0;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];
    
    int start = 0;
    int end = 0;
    int sum = v[0];

    while(end < n){
        if(sum < m ){
            end++;
            if(end < n){
                sum += v[end];
            }
        }
        else if(sum > m){
            sum -= v[start];
            start++;
        }
        else if(sum == m){
            sum -= v[start];
            start++;
            end++;
            if(end < n)
                sum += v[end];
            ans++;
        }
    }
    cout << ans;

}