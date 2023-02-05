#include <iostream>
using namespace std;

int main(){
    int n;         // 입력할 숫자의 개수
    int demical_count = 0;  // 소수의 개수

    cin >> n;
    for(int i=0; i<n; i++){
        int input;
        cin >> input;

        int count = 0;  // 약수의 개수 (2라면 소수)

        for(int i=1; i<=input; i++){
            if(input%i==0){       // 약수가 존재할 경우
                count++;          // 카운트를 1증가
            }
        }
        
        if(count == 2){           // 약수가 2개(소수)인 경우
            demical_count++;
        }
    }
    cout << demical_count;        // 소수의 개수를 출력
}