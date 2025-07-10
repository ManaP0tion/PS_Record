#include <iostream>
#include <vector>
#include <algorithm>
#define INF 2147483647
using namespace std;

vector<int> answer(2);

int main(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i<n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int start = 0;
    int end = n-1;
    int min = INF;

    while(start < end){
        int sum = v[start] + v[end];

        if(min > abs(sum)){
            min = abs(sum);
            answer[0] = v[start];
            answer[1] = v[end];

            if(sum == 0)
                break;
        }
        if(sum < 0)
            start++;
        else
            end--;
    }
    cout << answer[0] << " " << answer[1];
}

