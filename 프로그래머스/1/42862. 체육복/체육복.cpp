#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> v(n+2, 1);
    for(int x : lost) v[x]--;
    for(int x : reserve) v[x]++;
    
    for(int i = 1; i<=n; i++){
        // 체육복 있는 사람
        if(v[i] != 0) continue;
        
        // 앞번호 사람이 체육복 있는사람
        if(v[i-1] == 2){ 
            v[i-1]--; 
            v[i]++;
        }
        else if(v[i+1] == 2) {
            v[i+1]--;
            v[i]++;
        }
    }
    
    int answer = 0;
    for(int i=1; i<=n; i++){
        if(v[i] >= 1) answer++;
    }
    return answer;
}