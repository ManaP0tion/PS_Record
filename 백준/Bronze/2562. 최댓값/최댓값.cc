#include <iostream>
using namespace std;

int main(){
    int array[9];
    for(int i = 0; i<9; i++){
        cin >> array[i];
    }
    int MAX = array[0];
    int MAX_INDEX = 0;
    for(int j=0; j<9; j++){
        if(array[j] > MAX){
            MAX = array[j];
            MAX_INDEX = j;
        }
    }
    cout << MAX << "\n" << MAX_INDEX+1;
}