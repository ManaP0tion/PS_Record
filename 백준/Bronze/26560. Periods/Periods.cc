#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string temp;
    while(n--){
        getline(cin, temp);
        if(temp.back() == '.')
            cout << temp << "\n";
        else
            cout << temp << "." << "\n";
    }
}