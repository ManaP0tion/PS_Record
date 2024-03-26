#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int ans = 0;
    int N;
    cin >> N;
    vector<int> arr(N);
    for(auto& i : arr)
        cin >> i;
        
    sort(arr.begin(), arr.end());   // 오른차순 정렬
    int x;
    cin >> x;
    int count = 0, sum = 0, left = 0, right = N-1;
    while(left < right){
        sum = arr[left] + arr[right];
        if(sum < x) left++;
        else if(sum > x) right--;
        else{
            count++;
            left++;
            right--;
        }
    }
    cout << count;

}