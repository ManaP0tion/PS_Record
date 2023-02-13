#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cin >> num;
    float array[num];

    float sum = 0;
    
    for(int i = 0; i<num; i++){
        cin >> array[i];
    }
    sort(array, array+num, greater<>());    // 내림차순으로 정렬
    float max = array[0];

    for(int i=0; i<num;i++){
        array[i] = array[i]/max*100;
        sum += array[i];
    }

    cout << sum/num;


}