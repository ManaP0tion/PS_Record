#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    
    int temp = max(ceil((float)A/(float)C), ceil((float)B/(float)D));
    cout << L - temp;
}