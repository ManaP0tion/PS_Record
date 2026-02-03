#include <iostream>
#include <algorithm>
using namespace std;

class Medal{
public:
    int num; 
    int gold;
    int silver;
    int bronze;
};

Medal m[1001];

int main(){
    int N, K;
    int target = -1;
    cin >> N >> K;

    for(int i = 0; i<N; i++){
        cin >> m[i].num >> m[i].gold >> m[i].silver >> m[i].bronze;
        if(m[i].num == K)
        {
            target = i;
        }
    }

    int rank = 1;

    for(int i=0; i<N; i++){
        if(i == target) continue;

        if (m[i].gold > m[target].gold) {
            rank++;
        } 
        else if (m[i].gold == m[target].gold) {
            if (m[i].silver > m[target].silver) {
                rank++;
            } 
            else if (m[i].silver == m[target].silver) {
                if (m[i].bronze > m[target].bronze) {
                    rank++;
                }
            }
        }
    }
    cout << rank;
    
}