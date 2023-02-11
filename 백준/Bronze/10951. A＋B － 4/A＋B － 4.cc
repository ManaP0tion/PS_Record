#include <iostream>
using namespace std;

int main(){
    int a, b;
    do{
        cin >> a >> b;
        if(cin.eof()== true)
            break;
        cout << a + b << endl; 
    }
    while(cin.eof()!=true);
    return 0;
}