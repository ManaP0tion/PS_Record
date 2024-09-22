#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>a, pair<int, int> b){
    if(a.first == b.first) 
        return a.second < b.second;
    return a.first > b.first;
}

int main(){
    vector<pair<int,int>> score;
    int n, solved, panelty;
    int ans = 0;
    cin >> n;
    while(n--){
        cin >> solved >> panelty;
        score.push_back(make_pair(solved, panelty));
    }
    sort(score.begin(), score.end(), compare);

    for(int i=5; i < score.size(); i++){
        if(score[4].first == score[i].first)
            ans++;
    }
    cout << ans;    
}