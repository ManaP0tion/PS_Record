#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k, x;
vector<int> edge[300001];
bool visited[300001];



int main(){
    cin >> n >> m >> k >> x;
    vector<vector<int>> arr(n+1);
    int input1, input2;
    for(int i = 0; i<m; i++){
        cin >> input1 >> input2;
        arr[input1].push_back(input2);
    }

    vector<int> result;

    queue<pair<int,int>>q;
    q.push({x,0});
    visited[x] = 1;

    while(!q.empty()){
        int curNum = q.front().first;
        int curDepth = q.front().second;
        q.pop();

        if(curDepth == k){
            result.push_back(curNum);
        }
        for(int i = 0; i<arr[curNum].size(); i++){
            int nextNum = arr[curNum][i];

            if(!visited[nextNum])
            {
                visited[nextNum] = 1;
                q.push({nextNum, curDepth+1});
            }
        }
    }
    if(result.size() == 0){
        cout << -1 << "\n";
        return 0;
    }

    sort(result.begin(), result.end());
    for(auto &a : result)
        cout << a << "\n";
}