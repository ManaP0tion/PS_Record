#include <iostream>
using namespace std;

int main(){
    int arr[5] = {0, };
    int num = 0, max = 0;
    int temp;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<4; j++){
            cin >> temp;
            arr[i] += temp;
        }

        if(max < arr[i])
        {
            max = arr[i];
            num = i;
        }
    }
    cout << num+1 << " " << max;
}