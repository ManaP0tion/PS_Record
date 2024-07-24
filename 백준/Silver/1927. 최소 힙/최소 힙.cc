#include <queue>
#include <functional>
#include <iostream>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    priority_queue<int, vector<int>, greater<int>> pq;
    int n, temp;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> temp;

        if(temp > 0){
            pq.push(temp);
        }
        else if(temp == 0){
            if(!pq.empty()){
                cout << pq.top() << "\n";
                pq.pop();
            }
            else
                cout << 0 << "\n";
        }
    }
}