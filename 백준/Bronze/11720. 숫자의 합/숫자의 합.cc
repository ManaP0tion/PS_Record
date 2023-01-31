#include <iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    char array[size];
    int sum = 0;
    for(int i = 0; i<size; i++){
        cin >> array[i];
        sum += array[i] - '0';
    }
    cout << sum;
}