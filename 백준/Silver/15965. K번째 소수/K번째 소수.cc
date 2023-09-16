#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num = 500000;
    int arr[500001] ={0, };
    arr[1] = 1;
    vector <int> PrimeNumber;
    for(int i=2; i<=num; i++){
        for(int j=2; i*j<=num; j++){
            arr[i*j] = 1;
        }
    }

    for(int i=2; i<=num; i++){
        if(arr[i] == 0)
            PrimeNumber.push_back(i);
    }

    int input;
    cin >> input;

    cout << PrimeNumber[input-1];
}