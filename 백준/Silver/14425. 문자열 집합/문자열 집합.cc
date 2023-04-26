#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string, bool> map;
    string temp;
    int count = 0;

    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        
        cin >> temp;
        map.insert(pair<string, bool>(temp, true));
    }

    for(int i=0; i<m; i++){
        cin >> temp;
        if(map[temp]== true)
            count++;   
    }

    cout << count;
}
