#include <iostream>
using namespace std;

int main(){
    int sum;
    int count;
    int combine=0;

    cin >> sum;
    cin >> count;

    for(int i=0; i<count; i++){
        int price;          //가격
        int amount;         //구매개수
        
        cin >> price >> amount;
        combine += price*amount;
    }
    if(sum==combine)
        cout << "Yes";
    else
        cout << "No";
}