#include <iostream>
#include <stack>
#include <string>
using namespace std;

int ans = 0;


void solve(string s){
    stack<char> st;
    if(s.length() % 2 != 0 )
        return;
    
    int len = s.length();
    for(int i = 0; i<len; i++){
        if(st.empty())
            st.push(s[i]);
        else
            if(st.top() == s[i])
                st.pop();
            else
                st.push(s[i]);
    }

    if(st.empty())
        ans+=1;
    
}

int main(){
    int n;
    
    string s;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        solve(s);
    }
    cout << ans;
}