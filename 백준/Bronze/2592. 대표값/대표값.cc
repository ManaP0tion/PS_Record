#include <iostream>
using namespace std;

int main(){
    int sum = 0,max = 0, num, mode;
    int count[1001] ={0, };

    for(int i=0; i<10; i++){
        cin >> num;
        count[num]++;
        sum += num;
    }

    cout << sum/10 << "\n";     // average;
    
    for(int i=0; i<1000; i++){
        if(count[i] >= max){
            max = count[i];
            mode = i;
        }
    }

    cout << mode;             // mode
}