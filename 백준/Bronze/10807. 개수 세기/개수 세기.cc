#include <iostream>
using namespace std;

int main(){
    int array[100];
    int num;            //주어진 정수의 개수
    int input;          //찾으려고 하는 정수
    int count = 0;
    cin >> num;
    for(int i=0; i<num; i++){
        cin >> array[i];
    }
    cin >> input;
    for(int i=0; i<num; i++){
        if(array[i] == input)
            count++;
    }
    cout << count;
}