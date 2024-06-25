#include <iostream>
#include <algorithm>
#include <vector>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

vector<int> v;

int main(){
    fastio;
    int n, m, input;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    cin >> m;
    for(int i = 0; i<m; i++){
        cin >> input;
        cout << upper_bound(v.begin(), v.end(), input)-lower_bound(v.begin(), v.end(), input) << " ";
    }

}