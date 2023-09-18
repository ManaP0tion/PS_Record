#include <iostream>
using namespace std;

int main(){
    int num = 500000;
    int arr[500001] ={0, };
    int count = 0;

    int input;
    cin >> input;

    arr[1] = 1;
    for(int i=2; i<=num; i++){
        for(int j=2; i*j<=num; j++){
            arr[i*j] = 1;
        }
    }

    for(int i=2; i<=num; i++){
        if(arr[i] == 0){
            if(count == input-1){
                cout << i;
                break;
            }
            count++;
        }
    }
}