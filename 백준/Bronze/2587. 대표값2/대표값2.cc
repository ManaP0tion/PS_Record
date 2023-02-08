#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int array[5];
    int average = 0;
    for(int i=0; i<5; i++){
        cin >> array[i];
        average += array[i];
    }
    sort(array, array+5);
    average = average/5;        // 평균
    int middle_val = array[2];
    
    cout << average << "\n" << middle_val;
}