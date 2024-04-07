#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main(){
    queue<int> q;
    int result = 0;
    int n;
    cin >> n;
    string cmd;
    int input;
    for(int i=0; i<n; i++){
        cin >> cmd;
        if(cmd == "push"){
            cin >> input;
            q.push(input);
        }

        else if(cmd == "pop"){
            if(q.empty())
                result =  -1;
    
            else{
                result = q.front();   
                q.pop();
            }
            cout << result << "\n";        
        }
    
        else if(cmd == "size"){
            cout << q.size() << "\n";
        }

        else if(cmd == "empty"){
            if(q.empty())
                result = 1;
            else
                result = 0;
            cout << result << "\n";
        }

        else if(cmd == "front"){
            if(q.empty())
                result = -1;
            else
                result = q.front();
            cout << result << "\n";
        }

        else if(cmd == "back"){
            if(q.empty())
                result = -1;
            else
                result = q.back();
            cout << result << "\n";
        }
    }
    return 0;
}