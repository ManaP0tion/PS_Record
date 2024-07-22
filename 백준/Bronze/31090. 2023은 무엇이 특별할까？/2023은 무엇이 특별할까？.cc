#include <iostream>
#include <string>
using namespace std;

bool solution(int n){
    int a, b;
    a = n+1;
    b = (n % 1000)%100;
    
    if(a % b == 0)
        return 1;
    return 0;
}

int main(){
    int n, temp;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> temp;
        if(solution(temp) == 0)
            cout <<"Bye" <<"\n";
        else
            cout <<"Good" << "\n";
    }
}

