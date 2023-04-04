#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> element;
    int input;
    cin >> input;

    for(int i = 0; i<input; i++){
        int temp;
        cin >> temp;
        element.push_back(temp); 
    }
    sort(element.begin(), element.end());
    if(input == 1)
        cout << element[0]*element[0];
        
    else
        cout << element[0] * element[input-1];
}