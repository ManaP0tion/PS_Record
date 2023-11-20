#include <bits/stdc++.h>
using namespace std;
int parent[10001];

int set_find(int x){
    if(parent[x] == x) return x;

    else return parent[x] = set_find(parent[x]);
}

void set_union(int a, int b){
    a = set_find(a);
    b = set_find(b);
    parent[b] = a;
}

int find(int x, int y){
    x = set_find(x);
    y = set_find(y);
    if(x == y) return 1;
    else return 0;
}


int main(){
    int vertex, edge;
    int result = 0;
    vector<pair<int, pair<int, int>>> v;
    cin >> vertex >> edge;
    for(int i=0; i<edge; i++){
        int start, end, cost;
        cin >> start >> end >> cost;
        v.push_back({cost,{start, end}});
    }
    sort(v.begin(), v.end());
    for(int i =1; i<=vertex; i++) parent[i] = i;

    for(int i=0; i<v.size(); i++){
        if(!find(v[i].second.first, v[i].second.second)){
            set_union(v[i].second.first, v[i].second.second);
            result += v[i].first;
        }

    }
    
    cout << result;
}