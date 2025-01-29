#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main(){
    v.resize(100001);
    int n;
    cin >> n;

    v[0] = 0; v[1] = 1;

    for(int i = 0; i<= n; i++)
        v[i] = i;

    for(int i = 1; i<= n; i++){
        for(int j = 1; j*j <= i; j++){
            v[i] = min(v[i], v[i-j*j] + 1);
        }
    }
    cout << v[n];
}