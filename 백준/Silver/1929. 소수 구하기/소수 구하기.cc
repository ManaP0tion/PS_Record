#include <iostream>
using namespace std;

int main(){
    int min, max;
    int arr[1000001] ={0, };
    arr[1] = 1;

    cin >> min >> max;
    for(int i=2; i<=max; i++){
        for(int j=2; i*j<=max; j++){
            arr[i*j] = 1;
        }
    }

    for(int i=min; i<=max; i++){
        if(arr[i] == 0)
            cout << i << "\n";
    }
}

