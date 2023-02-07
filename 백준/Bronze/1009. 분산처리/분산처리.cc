#include <iostream>
using namespace std;

int main(){
    int T, a, b;
    long result;
    cin >> T;

    while(T--){
        cin >> a >> b;
        result = 1;

        for(int i=0; i<b; i++)
            result = (result*a)%10;     //1의 자리수만 받아서 곱한다

        if(result == 0)
            result = 10;
    
        cout << result << endl;
    }
}