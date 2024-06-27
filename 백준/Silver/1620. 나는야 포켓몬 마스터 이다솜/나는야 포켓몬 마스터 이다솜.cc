#include <iostream>
#include <map>
#include <string>
using namespace std;
string name[100001];
map<string, int>M;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, input_num;
    string input;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >>  input;
        name[i] = input;
        M[input] = i;
    }
    
    for(int i = 0; i<m; i++){
        cin >> input;
        if(isdigit(input[0])){ // 숫자인경우
            cout << name[stoi(input)] << "\n";
        }
        else{
            cout << M[input] <<"\n";
        }
    }
    
}