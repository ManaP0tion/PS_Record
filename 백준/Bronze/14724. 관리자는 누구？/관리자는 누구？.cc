#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(9, 0);
    // 2차원 배열 동적할당
    int **arr = new int*[9];
    for(int i = 0; i<9; i++){
        arr[i] = new int[n];
    }
    
    for(int i =0; i<9; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            if(arr[i][j] > v[i])
                v[i] = arr[i][j];
        }
    }
    int max= max_element(v.begin(), v.end()) - v.begin();    
    string clubNames[] = {"PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY"};
    string ans = clubNames[max];
    cout << ans;
}