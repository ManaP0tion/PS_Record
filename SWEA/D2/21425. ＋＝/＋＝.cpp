#include <iostream>
using namespace std;
void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}


int main(){
    init();
    int t;
    cin >> t;
    int A, B, N, t1, t2;
    int cnt = 0;
    for(int i = 0; i<t; i++){
        cnt = 0;
        cin >> A >> B >> N;
        
        while(A<=N && B<=N){
            if(A < B)
                A+=B;
            else
                B+=A;
            cnt++;
        }
        cout << cnt << "\n";
    }
}