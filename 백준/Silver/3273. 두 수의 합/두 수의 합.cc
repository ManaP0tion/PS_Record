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
        else{       // 같은경우
            count++;        
            left++;
        }
    }
    cout << count;
}

/*
    투포인터 활용문제
    처음에는 배열을 이용하여 모든 케이스를 검사했음 (이중 for문 사용)
    o(logn^2)의 시간복잡도를 가져 시간초과 발생


    투포인터 기법을 이용하여 left -> 0번 인덱스 , right -> n-1번 인덱스를
    가리키게 하고 입력배열을 오름차순으로 소팅한다.
    sum 값을 비교하여 sum이 x보다 작은 경우 left인덱스 증가, x보다 큰 경우 right 인덱스 감소
    만약 sum 값과 x가 같은경우 count 증가시키고 left를 증가시킴 
*/
