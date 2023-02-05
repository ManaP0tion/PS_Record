#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int break_even_point;
    if(B>=C)
        cout << "-1";
    else{
        break_even_point = A/(C-B) + 1; 
        cout << break_even_point;
    }
}