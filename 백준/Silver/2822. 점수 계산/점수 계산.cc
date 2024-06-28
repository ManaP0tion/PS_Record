#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <pair<int, int>> v(8);

bool comp(pair<int, int> a, pair<int, int> b){
    return a.first > b.first;
}

int main(){
    int result[5];
    int sum =0, temp = 0;
    for(int i=0; i<8; i++){
        cin >> temp;
        v.push_back(make_pair(temp, i));
    }

    sort(v.begin(), v.end(), comp);

    for(int i = 0; i<5; i++){
        sum+= v[i].first;
        result[i] = v[i].second;
    }
    cout << sum << "\n";
    sort(result, result+5);
    for(int i = 0; i<5; i++){
        cout << result[i]+1 << " "; 
    }
}