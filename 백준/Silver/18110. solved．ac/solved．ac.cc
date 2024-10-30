#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n, ans;
    cin >> n;
    if(n ==0){
        cout << 0;
        return 0;
    }
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());       // 오름차순 정렬수행한다
    int except = round(n * 0.15);      // 소숫점 첫째자리에서 반올림 및 int 형변환
    double sum = 0;
    for(int i = except; i<n-except; i++){
        sum += v[i];
    }
    ans = round(sum / (n - except *2));
    cout << ans;
}