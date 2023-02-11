#include <iostream>
using namespace std;

int main(){
    int input;
    bool check[31] = {0};

    for(int i=1; i<=28; i++){
        cin >> input;
        check[input] = 1;
    }
    for(int j=1; j<=30; j++){
        if(check[j]==0)
            cout << j << endl;
    }
    return 0;
}