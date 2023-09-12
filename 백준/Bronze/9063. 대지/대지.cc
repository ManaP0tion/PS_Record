#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x, maxX = -10001, minX = 10001;
    int y, maxY = -10001, minY = 10001;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        if(x>maxX) maxX = x;
        if(x<minX) minX = x;
        if(y>maxY) maxY = y;
        if(y<minY) minY = y;
    }
        int result = (maxX-minX) * (maxY-minY);
        cout << result;
    


}