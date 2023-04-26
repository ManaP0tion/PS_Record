#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    map<int, int> map;
    int n,m;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        map[temp]++;
    }

    cin >> m;
    for(int i=0; i<m; i++){
        int temp;
        cin >> temp;
        if(map.find(temp) != map.end())
            cout << "1 ";
        else
            cout << "0 ";
    }
    

}