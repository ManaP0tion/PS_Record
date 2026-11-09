#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int T, N, K, temp;
vector<int> v;

void dfs(int num, int sum){
    if(sum == K){
        ans++;
        return;
    }
    else if(num >= v.size()-1 || sum > K)
        return;
    else{
        dfs(num+1, sum);
        sum += v[num+1];
        dfs(num+1, sum);
    }
}

int main()
{
    cin >> T;
    for(int i=0; i<T; i++){

        cin >> N >> K;
        for(int i = 0; i<N; i++){
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());


        int start = 0, end = N-1;
        dfs(0, 0);
        dfs(0, v[0]);

        cout << "#"<< i+1 << " " << ans << endl;
        v.clear();
        ans = 0;
    }
}