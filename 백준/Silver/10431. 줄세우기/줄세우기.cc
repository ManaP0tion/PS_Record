#include <iostream>
#include <algorithm>
using namespace std;

int student[20];

int main(){
    int P;
    cin >> P;

    int num = 0, ans = 0;
    for(int i=0; i<P; i++){
        cin >> num;
        ans = 0;
        
        for(int j=0; j<20; j++){
            cin >> student[j];
        }

        for(int j=0; j<20; j++){
            for(int k=j; k<20; k++){
                if(student[j]>student[k])
                    ans+=1;
            }
        }
        cout << num << " " << ans << endl;
        

    }


}