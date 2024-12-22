#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> st;
    bool answer = false;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == '(')
            st.push(s[i]);
        else if(s[i] == ')'){
            if(!st.empty())
                st.pop();   // pop 시킴
            else
                return false;
        }
    }
    
    if(st.empty())
        answer = true;
    
    return answer;
}