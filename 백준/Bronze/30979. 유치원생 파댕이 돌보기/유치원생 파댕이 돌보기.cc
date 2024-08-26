#include <iostream>
using namespace std;

int main(){
    int t, n, temp;
    cin >> t >> n;;
    for(int i = 0 ; i<n; i++){
        cin >> temp;
        t -= temp;
    }
    if(t<=0)
        cout << "Padaeng_i Happy";
    else
        cout << "Padaeng_i Cry";
}