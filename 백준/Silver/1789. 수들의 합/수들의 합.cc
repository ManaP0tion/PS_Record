#include <iostream>
using namespace std;

int main(){
    long long s;
    cin >> s;

    int curr = 0;
    while(s>0){
        curr++;
        s = s - curr;
    }
    if(s<0)
        curr--;
    cout << curr;
}