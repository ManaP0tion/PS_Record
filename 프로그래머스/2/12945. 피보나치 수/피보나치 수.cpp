#include <string>
#include <vector>
using namespace std;
vector<int> fibo;
int solution(int n) {
    fibo.push_back(0);
    fibo.push_back(1);
    int ans = 0;
    for(int i = 2; i<=n; i++){
        fibo[2] = fibo[1] + fibo[0];
        if(fibo[2] > 1234567){
            fibo[2] = fibo[2] %1234567;
        }
        fibo[0] = fibo[1];
        fibo[1] = fibo[2];
    }    
    ans = fibo[2];
    return ans;
}