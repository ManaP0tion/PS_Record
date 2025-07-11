#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    int x1, y1, x2, y2, r1, r2, answer;
    double d, sub;
    for(int i=0; i<t; i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        d = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
        sub =  r1 > r2 ? r1 - r2 : r2 - r1;
        
        if(d==0 && r1 == r2)
            cout << -1 << "\n";
        
        else if(d == r1+r2 || sub == d)
            cout << 1 << "\n";
        
        else if(sub < d && d < r1+r2)
            cout << 2 << "\n";
        else
            cout << 0 << "\n";
    }
}