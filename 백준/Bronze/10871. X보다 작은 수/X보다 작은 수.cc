#include <iostream>
using namespace std;

int main(){
    int SIZE;
    int num;
    cin >> SIZE;
    cin >> num;
    int array[SIZE];
    for(int i=0; i<SIZE; i++){
        cin >> array[i];
    }
    for(int i=0; i<SIZE; i++){
        if(array[i] < num)
            cout << array[i] << " ";
    }
}