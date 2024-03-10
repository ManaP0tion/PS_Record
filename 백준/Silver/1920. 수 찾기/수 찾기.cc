#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);
    int n, m, num;
    cin >> n;
    
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    cin >> m;
    for(int i=0; i<m; i++){
        cin >> num;
        if(binary_search(v.begin(), v.end(), num))
            cout << "1\n";
        else
            cout << "0\n";
    }
}