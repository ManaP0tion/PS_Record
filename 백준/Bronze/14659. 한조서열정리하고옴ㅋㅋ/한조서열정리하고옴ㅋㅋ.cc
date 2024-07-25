#include <iostream>
using namespace std;

int main(){
    int n;
    int ans = 0;
    cin >> n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int temp;
    for(int i = 0; i<n-1; i++){
        temp = 0;
        for(int j=i+1; j<n; j++){
            if(arr[i]> arr[j])
                temp++;
            else
                break;
        }
        if(temp > ans)
            ans = temp;
    }
    cout << ans;
}