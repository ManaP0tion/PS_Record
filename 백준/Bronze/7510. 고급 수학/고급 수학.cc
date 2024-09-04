#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, a, b, c;
    int M;
    bool flag;
    cin >> n;
    
    for(int i = 0; i<n; i++){
        flag = false;
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        // 정렬
        sort(arr, arr+3, greater<>());
        if(pow(arr[0], 2) == pow(arr[1], 2) + pow(arr[2], 2)){
            flag = true;
        }
        cout<< "Scenario #" << i+1 << ":\n";
        if(flag == true)
            cout << "yes\n";
        else
            cout << "no\n";
        cout << "\n";
    }
}