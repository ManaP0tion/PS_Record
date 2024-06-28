#include <iostream>
using namespace std;

int main(){
    int a, b, n;
    int result = 0;

    cin >> a >> b >> n;
    for(int i = 0; i<n+1; i++){
        result = a/b;
        a = a%b * 10;
    }
    cout << result;

}