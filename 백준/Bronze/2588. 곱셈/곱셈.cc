#include <iostream>
using namespace std;

int main(){
    int A, B, n1, n2, n3, n4;
    cin >> A >> B;
    n1 = A*(B%10);
    n2 = A*(B%100- B%10);
    n3 = A*(B%1000 - B%100);
    n4 = n1+(n2)+(n3);
    cout << n1 << "\n" << n2/10 << "\n" << n3/100 << "\n" << n4;
}