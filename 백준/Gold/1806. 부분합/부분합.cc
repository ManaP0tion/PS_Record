// 투포인터 문제임

#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];

    int start = 0; int end = 0; int minLen = 2147483647, sum = 0;


    while(start <= end){
        if(sum >= s){
            minLen = min(minLen, end-start);
            sum -= v[start++];
        }
        else if(end == n)   break;
        else sum += v[end++];
    }

    if(minLen == 2147483647)   cout << 0;
    else cout << minLen;

}