#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int idx = 0;
    for(int i = 0; i<seoul.size(); i++)
    {
        if(seoul[i] == "Kim")
        {
            idx = i;
            break;
        }
    }
    string a = "김서방은 ";
    a.append(to_string(idx));
    string b = "에 있다";
    string answer = a  + b;
    return answer;
}