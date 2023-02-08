#include <iostream>
using namespace std;

int main(){
    int array[6] = {1, 1, 2, 2, 2, 8};
    int compare[6] = {0};

    for(int i = 0; i<6; i++){
        cin >> compare[i];
        array[i] -= compare[i];

        cout << array[i] << " ";
    }
}
