#include <iostream>
using namespace std;

int arr[1001] = {0, };

void init(){    // 
    int k = 1;
    for(int i = 1; i<=1000; i++){
        for(int j = 0; j<i; j++){
            if(k>1000)
                break;  
            arr[k++] = i;
        }
        if(k>1000)
            break;   
    }
}

int main(){
    init();
    int pSum[1001] = {0};
    for(int i = 1; i<=1000; i++){
        pSum[i] = arr[i]+pSum[i-1];
    }
    int a, b;
    cin >> a >> b;
    cout << pSum[b] - pSum[a-1];
}