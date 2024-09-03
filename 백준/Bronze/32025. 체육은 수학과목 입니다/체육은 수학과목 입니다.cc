#include <iostream>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    
    int ans = min(h,w)*100 / 2;

    cout << ans;
}