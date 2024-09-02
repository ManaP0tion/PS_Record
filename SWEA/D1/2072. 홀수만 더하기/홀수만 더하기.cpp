#include <iostream>
using namespace std;

int main(){
    int n, sum, temp;
    int cnt = 0;
    cin >> n;
    for(int i = 1; i<= n; i++){
        sum = 0; // 초기화
        for(int i = 0; i<10; i++){
            cin >> temp;
            if(temp % 2 != 0)
                sum +=temp;
        }
        cout << "#" << i << " " << sum <<"\n";
    }
    return 0;
}