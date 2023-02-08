#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if(A != B && A != C && B != C){ // 주사위 3개의 눈이 모두 다른경우
        int array[3] = {A, B, C};
        sort(array, array+3, greater<>());       // 내림차순 정렬 수행

        cout << array[0]*100 << endl;       
    }

    if((A == B && A != C)||(A == C && A != B)) // A와 같은 수
        cout << (A*100)+1000 << endl;

    if((B == C) && (B != A))
        cout << (B*100)+1000 << endl;

    if(A==B && A==C){  // 주사위 3개의 눈이 모두 같은 경우
        cout << (A*1000)+10000 << endl;
    }
}