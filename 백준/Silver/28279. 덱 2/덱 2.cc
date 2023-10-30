#include <iostream>
#include <deque>
using namespace std;
deque<int> d;

int main(){
    cin.tie(0); 
	cout.tie(0); 
	ios::sync_with_stdio(false);
    int n, command, num;
    cin >> n;
    while(n--){
        cin >> command;
        switch(command){
            case 1:
                cin >> num;
                d.push_front(num);
                break;
            case 2:
                cin >> num;
                d.push_back(num);
                break;
            case 3:
                if(!d.empty()){
                    cout << d.front() <<"\n";
                    d.pop_front();
                }
                else
                    cout << -1 <<"\n";
                break;
            case 4:
                if(!d.empty()){
                    cout << d.back() <<"\n";
                    d.pop_back();
                }
                else
                    cout << -1 << "\n";
                break;
            case 5:
                cout << d.size() <<"\n";
                break;
            case 6:
                if(d.empty())
                    cout << 1 << "\n";
                else
                    cout << 0 << "\n";
                break;
            case 7:
                    if(d.empty())
                        cout << -1 <<"\n";
                    else
                        cout << d.front() << "\n";
                    break;
            case 8:
                    if(d.empty())
                        cout << -1 <<"\n";
                    else
                        cout << d.back() << "\n";
                    break;

        }
        
    }
}