#include <iostream>
#include <queue>
using namespace std;

int main(){
    cin.tie(NULL);
	cin.sync_with_stdio(false);
    queue <int> q;
    string s;

    int count;
    cin >> count;
    for(int i=0; i<count; i++){
        cin >> s;

        if(s == "push"){
            int num;
            cin >> num;
            q.push(num);
        }

        else if(s == "pop"){
            if(!q.empty()){
                cout << q.front() << "\n";
                q.pop();
            }
            else
                cout << -1 << "\n";
        }

        else if(s == "size"){
            cout << q.size() << "\n";
        }

        else if(s == "empty"){
            cout << q.empty() << "\n";
        }

        else if(s == "front"){
            if (!q.empty()) cout << q.front() << '\n';
			else cout << -1 << '\n';
        }

        else if (s == "back"){
            if (!q.empty()) cout << q.back() << '\n';
			else cout << -1 << '\n';
        }
    }
}