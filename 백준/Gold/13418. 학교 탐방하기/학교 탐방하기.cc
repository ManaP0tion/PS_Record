#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

int parent[MAX];
int vertex, edge;

struct graph{
    int a;
    int b;
    int c;
};
vector<graph> v;

bool compare1(graph a, graph b){
    if(a.c < b.c) return true;
    return false;
}

bool compare2(graph a, graph b){
    if(a.c > b.c) return true;
    return false;
}


int find(int x){
    if(parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}

bool merge(int x, int y){
    x = find(x); 
    y = find(y);
    if(x == y) return 0;
    parent[x] = y;
    return 1;
}

int kruskal(){
    for(int i=0;i<=vertex;i++) parent[i]=i;
 
    int cnt=0,ret=0;
    for(int i=0;i<v.size();i++){
        if(merge(v[i].a,v[i].b)){
            if(v[i].c==0) ret++;
            if(++cnt==vertex) break;
        }
    }
    return ret*ret;
}


int main(){
    int result = 0;
    int max_tired = 0;
    int min_tired = 0;
    cin >> vertex >> edge;
   

    for(int i=0; i<edge+1; i++){
        int start, end, cost;
        cin >> start >> end >> cost;
        v.push_back({start, end, cost});
    }

    sort(v.begin(), v.end(), compare1);
    min_tired = kruskal();

    sort(v.begin(), v.end(), compare2);
    max_tired = kruskal();

    result = min_tired - max_tired;
    cout << result;

}