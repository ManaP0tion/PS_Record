#include <bits/stdc++.h>
using namespace std;

int main(){
    int testcase = 10;
    for(int TC = 1; TC<=testcase; TC++){
        int N;
        cin >> N;
        
        int ans = 0;
        int left, right;
        vector<int> building(N);

        for(int i = 0; i<N; i++)
            cin >> building[i];

        for(int i = 2; i<N-2; i++){
            left = max(building[i-1], building[i-2]);
            right = max(building[i+1], building[i+2]);

            if(building[i] > left && building[i] > right)
                ans += building[i] - max(left, right)  ;
        }

        cout << "#" << TC << " " << ans <<'\n';
        

        // 조건 왼쪽 두칸 + 오른족 두칸 항상 높이가 0
    }
}