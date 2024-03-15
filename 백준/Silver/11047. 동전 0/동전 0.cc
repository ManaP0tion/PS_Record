#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int size, origin;
    int temp;
    cin >> size >> origin;
    for(int i=0; i<size; i++){
        cin >> temp;
        v.push_back(temp);
    }
    

    int ans = 0;
    for(int i = size-1; i>=0; i--){
        ans += origin/v[i];
        origin = origin % v[i];
    }
    cout << ans;

}