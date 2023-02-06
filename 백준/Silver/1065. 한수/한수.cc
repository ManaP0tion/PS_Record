#include <iostream>
using namespace std;

int main(){
    int X;
    cin >> X;
    int array[3];
    int count = 0;
    
    for(int i = 1; i<=X; i++){
        if(i<100)       // 2자리 수
            count++;
        
        else if(i!=1000){
            int tmp = i;
            int index = 0;

            while(tmp>0){
                array[index] = tmp%10;
                tmp = tmp/10;
                index++;
            }

            if(array[0]-array[1] == array[1] - array[2]){
                count++;
            }
        }
    }
    cout << count;
}