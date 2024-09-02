#include <iostream>
#include <string>
#include <stack>
#include <algorithm>


using namespace std;

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

    string s, target, ans ="";
    cin >> s >> target;
    for(int i = 0; i<s.size(); i++)
    {
        ans += s[i];
        if(ans.size() >= target.size()){
            if(ans.substr(ans.size() - target.size(), target.size()) == target)
                ans.erase(ans.end() - target.size(), ans.end());

        }
    }
    if(ans.size() > 0)
        cout << ans;
    else
        cout << "FRULA";
}