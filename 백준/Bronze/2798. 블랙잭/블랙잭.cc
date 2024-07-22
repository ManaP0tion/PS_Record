#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int ans = 0, max = 0;
    cin >> n >> m;
    int *arr = new int[n];

    for(int i = 0; i<n; i++)
        cin >> arr[i];
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                ans = arr[i] + arr[j] + arr[k];
                if(ans > m)
                    continue;
                if(max < ans)
                    max = ans;
            }
        }
    }
    cout << max;
}