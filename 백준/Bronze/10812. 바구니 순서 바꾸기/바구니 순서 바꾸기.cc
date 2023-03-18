#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    int N, M;
    cin >> N >> M;
    for(int i=1; i<=N; i++)
        v.push_back(i);
    
    while(M--){
        int i, j, k;
        cin >> i >> j >> k;
        rotate(v.begin()+(i-1),v.begin()+(k-1) ,v.begin()+j);
    }
    for(int i:v)
        cout << i << " ";
        
}
