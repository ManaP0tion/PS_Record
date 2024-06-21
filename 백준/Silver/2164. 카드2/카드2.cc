#include <iostream>
#include <deque>
using namespace std;

int main(){
    int N, temp;
    cin >> N;
    deque<int> q;
    // 덱 초기화
    for(int i=0; i<N; i++)
        q.push_back(i+1);
    
    while(q.size()>1){
        q.pop_front();
        q.push_back(q.front());
        q.pop_front();
    }
    cout << q.front();
    
}