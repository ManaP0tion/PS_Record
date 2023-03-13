#include <iostream>
#include <vector>
using namespace std;

int main(){
    while(1){
        vector <int> array;
        int n;
        cin >> n;
        int count = n;
        int sum = 0;

        if(n == -1)
            break;
        for(int i=1; i<n; i++){
            if(n%i == 0){
                sum += i;
                array.push_back(i);
            }
        }
    
        if(n == sum){
            cout << n << " = ";
            for(int i = 0; i<=array.size(); i++){
                    if(i == array.size()-1){
                        cout << array[i] << "\n";
                        break;
                    }
                        else
                            cout << array[i] << " + ";
                    }
                }
        
        else
           cout << n << " is NOT perfect." << "\n";
    }
    return 0;
}