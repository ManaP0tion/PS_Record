#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, m, t;
    cin >> n;

    vector<int> flag(n);
    deque<int> dq;
    for(int i = 0; i<n; i++){
        cin >> flag[i];
    }

    for(int i = 0; i<n; i++){
        cin >> t;
        if(flag[i] == 0)
            dq.push_back(t);
    }

    cin >> m;

    for(int i=0; i<m; i++){
        cin >> t;
        dq.push_front(t);
        cout << dq.back() << " ";
        dq.pop_back();
    }
}