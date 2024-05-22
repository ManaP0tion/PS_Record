#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int size = arr.size();
    int curr = 0;
    if(size != 0){
        answer.push_back(arr[0]);
    }
    for(int i = 1; i<size; i++){
        if(arr[i] != answer[curr]){
            answer.push_back(arr[i]);
            curr++;
        }
    }
    cout << "Hello Cpp" << endl;

    return answer;
}