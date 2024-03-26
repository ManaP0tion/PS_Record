#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    /*
    별: 9 빈칸: 0
    별: 7 빈칸: 1
    별: 5 빈칸: 2
    별: 9 - 2n
    빈칸 : n
    */

   // 상단
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int k = 1; k <= 2*n - (2*i+1); k++)
            cout << "*";
        cout << "\n";
    }
    
    // 하단
    for(int i = 0; i<n; i++){
        for(int j=1; j<= n-1-i; j++)
            cout << " ";
        for (int k =1; k <= (i*2+1); k++)
            cout << "*";
        cout << "\n";
    }
}