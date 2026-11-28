#include <bits/stdc++.h>
using namespace std;

int n, c;
int a[1001];
map<int, int> mp, mp_first;
vector<pair<int, int>> v;

// 커스텀 오퍼레이터
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first){
        return mp_first[a.second] < mp_first[b.second];
    }

    return a.first > b.first;
}


int main(){
    cin >> n >> c;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        mp[a[i]]++;

        // 맵에 존재여부 확인하고 없다면 할당
        if(mp_first[a[i]] == 0)
            // 참조가 일어나지 않을경우 0으로 초기화 되기 때문에 +1 해준다
            mp_first[a[i]] = i+1;
    }

    for(auto it:mp){
        v.push_back({it.second, it.first});
    }

    // 커스텀 정렬 수행
    sort(v.begin(), v.end(), cmp);

    for(auto i : v){
        for(int j = 0; j<i.first; j++){
            cout << i.second << " ";
        }
    }

}