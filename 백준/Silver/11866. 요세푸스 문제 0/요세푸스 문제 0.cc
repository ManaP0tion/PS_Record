#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    queue<int> q;
    for(int i=0;i<n;i++)
        q.push(i+1);
    cout << "<";
    while (!q.empty()){
        for(int i=0; i<k-1; i++){
            q.push(q.front());
            q.pop();    //팝하기
        }
        cout << q.front();
        if(q.size()>=2)
            cout << ", ";
        q.pop();
    }    
    cout << ">";
}