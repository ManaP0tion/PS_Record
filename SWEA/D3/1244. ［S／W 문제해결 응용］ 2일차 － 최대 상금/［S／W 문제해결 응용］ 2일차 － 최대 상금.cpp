#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int max_cnt, ans;
string num;

void dfs(int idx, int cnt){
    if (cnt == max_cnt){
        ans = max(ans, stoi(num));
        return;
    }

    for(int i = idx; i<num.length()-1; i++){
        for(int j=i+1; j<num.length(); j++){
            if(num[i] <= num[j])
            {
                swap(num[i], num[j]);
                dfs(i, cnt+1);
                swap(num[i], num[j]);
            }

            if ( i == num.length()-2 && j == num.length()-1){
                swap(num[i], num[j]);
                dfs(i, cnt+1);
                swap(num[i], num[j]);
            }
        }
    }
}

int main(){
    int T;
    cin >> T;

    for (int i = 1; i<=T; i++){
        cin >> num >> max_cnt;
        ans = 0;
        dfs(0, 0);
        cout << "#" << i << " " << ans << "\n";
    }
}