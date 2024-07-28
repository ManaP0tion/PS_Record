#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int M=0, Y=0;
    cin >> n;

    vector<int> call(n);
    for(int i=0;i<n; i++){
        cin >> call[i];
        Y += (call[i] / 30 +1) * 10;
        M += (call[i] / 60 +1) * 15;
    }
    if(M == Y)
        cout << "Y M " << Y;
    else if(M>Y)
        cout <<"Y " << Y;
    else
        cout << "M " << M;
    
}