#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string x;
    while(1){
        cin >> x;
        if(x == "0")    break;
        string rev = x; 
        reverse(rev.begin(), rev.end());
        if(rev == x) cout << "yes";
        else    cout << "no";
        cout <<"\n";
    }
}