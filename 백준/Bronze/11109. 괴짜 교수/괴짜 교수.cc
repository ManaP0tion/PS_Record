#include <iostream>
using namespace std;

int main(){
    int t, d, n, s, p;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> d >> n >> s >> p;

        if(n*p+d > s*n)
            cout << "do not parallelize\n";
        else if(n*p+d == s*n)
            cout << "does not matter\n";
        else
            cout << "parallelize\n";
    }
}