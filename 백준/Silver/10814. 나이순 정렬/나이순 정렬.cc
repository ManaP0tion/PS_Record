#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b ){
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;
    pair<int, string> temp;
    vector<pair<int, string>> v;

    for(int i=0; i<n; i++){
        cin >> temp.first >> temp.second;
        v.push_back(temp);
    }

    stable_sort(v.begin(), v.end(), compare);
    for(int i=0; i<n; i++){
        cout << v[i].first << " " << v[i].second << "\n";

    }
}