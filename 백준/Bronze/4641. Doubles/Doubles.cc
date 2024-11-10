#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    int ans = 0;
    vector<int> v;

    while(1){
        cin >> num;
        if(num == -1)
            break;

        if(num == 0){
            for(int i = 0; i<v.size(); i++){
                for(int j=0; j<v.size(); j++){
                    if(v[j]*2 == v[i])
                        ans++;
                }
            }
            cout << ans << "\n";
            ans = 0;
            v.clear();
        }

        else{
            v.push_back(num);
        }
    }
}