#include <iostream>
using namespace std;

int main()
{
    string s;
    int ans;
    while(1){
        cin >> s;
        if(s == "0")
            break;
        while(1){
            ans = 0;
            for(int i =0; i<s.size(); i++)
                ans += s[i]-'0';
            if(ans < 10)
                break;
            s = to_string(ans);
        }
        cout << ans << "\n";
    }
}
