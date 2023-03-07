#include <iostream>
using namespace std;

int main(){
    int square[101][101] ={0, };
    int repeat;
    cin >> repeat;

    for(int i=0; i<repeat; i++){
        int x, y;
        cin >> x >> y;
        for(int j = x; j<x+10; j++)
            for(int k = y; k<y+10; k++)
                    square[j][k]=1;
    }

    int count = 0;
    for(int i=0; i<=100; i++)
        for(int j=0; j<=100; j++)
            if(square[i][j] == 1)
                count++;
    cout << count;
}