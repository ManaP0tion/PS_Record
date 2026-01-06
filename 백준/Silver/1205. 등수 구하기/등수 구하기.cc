#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, newScore, P;
    cin >> N >> newScore >> P;

    int rank[100] = {0, };
    
    for(int i = 0; i<N; i++)
       cin >> rank[i];
          
    int cnt = 0;
    int my_rank = 1;
    for(int i = 0; i<N; i++){
        if(newScore < rank[i]) my_rank += 1;
        else if(newScore == rank[i]) my_rank = my_rank;
        else break;
        cnt++;
    }

    if(cnt == P) my_rank = -1;
    if(N==0) my_rank = 1;
    
    
    cout << my_rank;

}