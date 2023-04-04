#include <iostream>
using namespace std;

int uclide(int A, int B){
    if( A % B == 0)
        return B;
    else
        return uclide(B, A % B);
}
int main(){
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int A, B, remain;
        cin >> A >> B;
        cout << A*B / uclide(A, B) << "\n";
    }
}