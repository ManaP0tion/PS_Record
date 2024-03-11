#include <iostream>
using namespace std;

int main(){
    string str;
    char kr[5] = {'K', 'O', 'R', 'E', 'A'};
    int idx = 0;
    int cnt = 0;
    cin >> str;
    for(int i=0; i<str.length(); i++){
        if(str[i] == kr[idx]){
            idx++;
            cnt++;
        }
        if(cnt % 5 == 0)    idx = 0;        // 5개가 있다면 인덱스를 다시 0으로 초기화 시킨다
    }
    cout << cnt;
}