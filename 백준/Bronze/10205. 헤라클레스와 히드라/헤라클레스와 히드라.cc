#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string cmd;
    int head = 0;
    for(int i = 1; i<=n; i++){
        cin >> head;
        cin >> cmd;
        for(int i = 0; i<cmd.length(); i++)
        {
            if(cmd[i] == 'c')   head++;
            else head--;
        }
        cout <<"Data Set " << i << ":\n";
        cout << head << "\n\n";
    }
}