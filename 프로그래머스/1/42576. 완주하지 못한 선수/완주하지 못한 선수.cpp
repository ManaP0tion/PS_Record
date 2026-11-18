#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    bool flag = false;
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    
    for(int i =0; i<participant.size()-1; i++){
        if(participant[i] != completion[i]){ 
            return participant[i];
        }
    }
    
    if(!flag)
        return participant.back();
    
    
    return answer;
}