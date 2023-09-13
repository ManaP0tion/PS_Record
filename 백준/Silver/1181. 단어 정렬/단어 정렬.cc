#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(string a, string b){   
    if(a.length() == b.length())
        return a<b;                         // 사전순 정렬
    else{
        return a.length() < b.length();      // 길이가 짧은것 먼저
    }
}

int main(){
    int num;
    cin >> num;
    vector<string> v1;
    for(int i = 0; i<num; i++){
        string str;
        cin >> str;
        v1.push_back(str);
    }
    sort(v1.begin(), v1.end(), compare);
    for(int i=0; i<num; i++){
        if(v1[i] == v1[i+1]){   
            continue;       // 중복문자 제거
        }
        cout << v1[i] << "\n";
    }
}