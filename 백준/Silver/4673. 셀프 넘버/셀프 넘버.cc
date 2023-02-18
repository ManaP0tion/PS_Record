#include <iostream>
using namespace std;

int self_number(int input){
    int sum = input;
    
    while(input != 0){
        sum = sum + (input%10);
        input = input/10;
    }
    return sum;
}

int main(){
    bool check[10001] = {false, };

    for(int i=1; i<10001; i++){
       int num = self_number(i);
       if(num<10001){
            check[num] = true;
        }
    }

    for(int i=1; i<10001; i++){
        if(!check[i])
            cout << i << "\n";
    }
    return 0;
}