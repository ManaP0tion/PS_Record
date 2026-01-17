#include <iostream>
#include <deque>
using namespace std;

deque<int> dq;

int main(){
    int n, m;
    cin >> n >> m;
    int t, idx;

    int ans = 0;
    // 삽입
    for(int i=1; i<=n; i++)
        dq.push_back(i);
    
    while(m--){
        cin >> t;
        for(int i = 0; i<dq.size(); i++){
            
            // 인덱스를 찾는다
            if(dq[i] == t){
                idx = i;
                break;
            }
        }

        // 여기서 (dq.size() - idx) 해서 앞에서 찾을지(2), 뒤에서 찾을지(3) 결정
        
        if(idx <= dq.size() - idx){
            while(1){
                if(dq.front() == t){
                    dq.pop_front();
                    break;
                }
                ans++;
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }        

        else{
            while(1){
                if(dq.front() == t){
                    dq.pop_front();
                    break;
                }
                ans++;
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    
    cout << ans;

    return 0;
}