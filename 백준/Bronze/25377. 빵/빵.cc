#include <iostream>
using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    int min = 2147483647;
    int cnt = 0;
    while(n--){
        cin >> a >> b;
        if(b > a){
            cnt++;
            if(b < min)
                min = b;
        }
    }
    if(cnt == 0)
        cout << -1;
    else
        cout << min;
}