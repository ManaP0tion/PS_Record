#include <iostream>
using namespace std;

int main(){
    int case_num, repeat;
    int ball[101] ={0, };

    cin >> case_num >> repeat;

    for(int t=0; t<repeat; t++){
        int i, j, k;
        cin >> i >> j >> k;
        
        for(int r=i; r<=j; r++){
            ball[r] = k;
        }
    }

    for(int i=1; i<=case_num; i++){
        cout << ball[i] << ' ';
    }
    return 0;
}