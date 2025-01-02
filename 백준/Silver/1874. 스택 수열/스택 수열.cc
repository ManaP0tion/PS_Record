#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> s;
vector<char> result;
int cnt = 1;


int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;

        while(cnt <= a){
            s.push(cnt);
            cnt++;
            result.push_back('+');
        }

        if(s.top() == a){
            s.pop();
            result.push_back('-');
        }
        else{
            cout << "NO";
            return 0;
        }
    }

    for(int i=0; i<result.size(); i++){
        cout << result[i] << "\n";
    }
}