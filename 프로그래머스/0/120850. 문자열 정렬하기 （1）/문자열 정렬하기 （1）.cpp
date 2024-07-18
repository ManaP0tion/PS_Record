#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    int temp;
    for(int i =0; i<my_string.length(); i++){
        if(isdigit(my_string[i])!= 0){
            temp = my_string[i] - '0';
            answer.push_back(temp);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}