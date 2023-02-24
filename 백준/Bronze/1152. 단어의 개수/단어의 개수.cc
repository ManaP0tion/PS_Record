#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int count = 0;
    getline(cin, str);

    if(str.empty()){
        cout << "0";
        return 0;
    }

    count = 1;  // 빈 문자열이 아니라면 단어의 개수는 1

    for(int i=0; i<str.length(); i++){
        if(str[i] == ' ')
            count++;
    }
    
    if(str[0] == ' ')
        count--;
    if(str[str.length() - 1] == ' ')    //문자열의 맨 앞과 맨 뒤가 공백일 경우엔 새로운 단어가 아니다
        count--;
    
    cout << count;
    
    return 0;
}

