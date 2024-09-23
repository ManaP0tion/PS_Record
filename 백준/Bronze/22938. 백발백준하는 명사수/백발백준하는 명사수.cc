#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x1, x2, y1, y2,r1, r2;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
    double dis = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    if(dis < r1+r2)
        cout << "YES";
    else
        cout << "NO";

}