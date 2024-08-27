#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    priority_queue<int> pq;
    vector<int> v;
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x != 0)
            pq.push(x);
        else{
            if(pq.empty())
                v.push_back(0);
            else{
                v.push_back(pq.top());
                pq.pop();
            }
        }
    }
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << "\n";
    }
}