#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    int cnt = 0;
    string temp;
    vector<string> s;
    vector<string> ans;

    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> temp;
        s.push_back(temp);
    }
    sort(s.begin(), s.end());

    for(int j=0; j<m; j++){
        cin >> temp;
        if(binary_search(s.begin(), s.end(), temp)){
            cnt++;
            ans.push_back(temp);
        }
    }
    sort(ans.begin(), ans.end());
    cout << cnt << "\n";
    for(int i =0; i<ans.size(); i++){
        cout << ans[i] << "\n";
    }
}