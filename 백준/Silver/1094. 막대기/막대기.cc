#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    int stick[] = {64, 32, 16, 8, 4, 2, 1};
    int cnt = 0;
    
    for(int i = 0; i<7; i++)
    {
        if(x>=stick[i])
        {
            cnt++;
            x -= stick[i];
        }

        if(x==0)
            break;
    }
    cout << cnt;
}