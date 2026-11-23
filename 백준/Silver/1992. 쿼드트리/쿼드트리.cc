#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int N;
char a[100][100];



string quard(int y, int x, int size){
    if(size == 1) return string(1, a[y][x]);
    char b = a[y][x];
    string result = "";
    bool flag = 0;

    for(int i = y; i<y+size; i++){
        for(int j = x; j<x+size; j++){

            // 0 or 1이 아닌경우
            if(b != a[i][j]){
                result += '(';
                result += quard(y, x, size/2);
                result += quard(y, x+size/2, size/2);
                result += quard(y+size/2, x, size/2);
                result += quard(y+size/2, x+size/2, size/2);
                result += ')';
                return result;
            }
        }
    }
    return string(1, a[y][x]);

}


int main(){
    cin >> N;
    string s;
    for(int i = 0; i<N; i++){
        cin >> s;
        for(int j=0; j<N; j++){
            a[i][j] = s[j];
        }
    }
    cout << quard(0, 0, N) << "\n";
    return 0;
}