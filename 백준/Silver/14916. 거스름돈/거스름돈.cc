#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int five = n/5;
    if(n % 5 == 0){
        cout << five;
        return 0;
    }

    while(five >= 0){
        int temp = (n - (five*5)) % 2;
        int two = (n - (five*5)) / 2;
        if(temp == 0){
            cout << five + two;
            return 0;
        }
        five--;
    }
    cout << -1;
}