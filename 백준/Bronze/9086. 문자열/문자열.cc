#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N;
    while(N--){
        cin >> S;
        int back = S.size();
        cout << S[0] << S[back - 1] << "\n";
    }
}