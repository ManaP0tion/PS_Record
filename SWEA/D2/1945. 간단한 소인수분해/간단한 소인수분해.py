#include <iostream>
using namespace std;

int T, n;
int arr[5] = {11, 7, 5, 3 ,2};

int main(){
    cin >> T;
    for(int tc = 1; tc<=T; tc++){
        int ans[5] = {0};
        cin >> n;
        for(int i =0; i<5; i++){
            
            while(n%arr[i] == 0){
                n /= arr[i];
                ans[i]++;
            }
        }
        cout << "#" << tc<< " ";
        for(int i=4; i>=0; i--)
            cout << ans[i] << " ";
        cout << endl;
    }
}