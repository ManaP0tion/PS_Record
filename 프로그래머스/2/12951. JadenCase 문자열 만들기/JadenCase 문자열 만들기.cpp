#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool flag = false;
    
    for(auto c : s){
        if(c == ' '){
            answer += ' ';
            flag = false;
        }
        else if (!flag){
            answer += toupper(c);
            flag = true;
        }   
        else{
            answer += tolower(c);
        }
    }
    return answer;
}