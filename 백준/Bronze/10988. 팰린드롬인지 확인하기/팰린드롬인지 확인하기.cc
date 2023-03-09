#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str, temp;
    cin >> str;
    temp = str;
    
    reverse(temp.begin(), temp.end());

    if(str == temp)
        cout << 1;
    else
        cout << 0;
    
    return 0;
}