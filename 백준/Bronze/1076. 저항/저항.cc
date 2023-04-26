#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    long long score = 0;
    string color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    string input;
    for(int i=0; i<3; i++){
        cin >> input;
            for(int j=0; j<10; j++){
                if(input == color[j]){
                    if(i == 0)
                        score += j*10;
                    else if(i == 1)
                        score += j;
                    else if(i == 2)
                        score *= pow(10, j);
                }
            }
    }
    cout << score;
}