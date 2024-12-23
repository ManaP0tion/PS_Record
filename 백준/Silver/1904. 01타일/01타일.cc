#include <iostream>
#include <vector>
using namespace std;

vector<long long> ans = {0, 1, 2};
int n;

void solution()
{
    long long tmp;
    for(int i = 3; i<=n; i++){
        tmp = 0;
        tmp = ans[i-1] + ans[i-2];
        ans.push_back(tmp%15746);
    }
}
int main(){
    cin >> n;
    solution();    

    cout << ans[n] % 15746;
}