#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<string, int>>v;
bool compare(pair<string, int>a, pair<string, int> b){
    return a.second < b.second;
}

int main(){
    int n;
    cin >> n;
    
    string s; int temp;
    for(int i = 0; i<n; i++)
    {
        cin >> s >> temp;
        v.push_back(make_pair(s, temp));
    }
    sort(v.begin(), v.end(), compare);

    cout << v[0].first;

}