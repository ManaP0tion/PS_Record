#include <iostream>
using namespace std;

void repeat(int r){
    int x = r;
    for(int i=1; i<=x; i++){
        cout <<"Hello World, Judge "<< i << "!" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    repeat(n);
}