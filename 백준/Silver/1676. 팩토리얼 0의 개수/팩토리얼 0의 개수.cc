#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int n_5 = n / 5;
    int n_25 = n / 25;
    int n_125 = n / 125;
    cout << n_5+n_25+n_125;
}