#include <iostream>
#include <vector>
using namespace std;

int main(){
    int A, B;
    vector <int> v1;

    cin >> A >> B;
    for(int i=1; i<=A; i++){
        if(A%i == 0){
            v1.push_back(i);
        }
    }
    cout << v1[B-1];
}