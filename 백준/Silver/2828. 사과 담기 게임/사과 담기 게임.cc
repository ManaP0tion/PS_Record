#include <iostream>
#include <vector>
using namespace std;


vector<int> v;
int N, basket, J;
int input;

int l, r;

int pos;
int cnt = 0;
int main(){
    cin >> N >> basket;
    cin >> J;
    l = 1;
    for(int i =0; i<J; i++){
        cin >> input;
        r = l + basket -1;
        if(input >= l && input <= r) continue;
        else{
            if(input < l){
                cnt += (l-input);
                l = input;
            }
            else{
                l += (input-r);
                cnt += (input - r);
            }
        }
    }
    cout << cnt;


   


}