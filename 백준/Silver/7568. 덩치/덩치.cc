#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    int rank = 1;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i< n; i++){     
        cin >> v[i].first >> v[i].second;
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(v[i].first <  v[j].first && v[i].second < v[j].second)
                rank++;
        }
        cout << rank << " ";
        rank = 1;           // 다시 초기화
    }
}