#include <iostream>
using namespace std;

int main(){
    int total;
    cin >> total;
    int software = 0, imbaded = 0, ai = 0;
    int freshmen = 0;
    for(int i = 0; i<total; i++){
        int grade;
        int room;
        int num;
        cin >> grade >> room >> num;
        if(grade == 1)
            freshmen++;
        if(grade >= 2){
            if(room == 1 || room == 2)
                software++;
            else if(room == 3)
                imbaded++;
            else if(room == 4)
                ai++;
        }
    }
    cout << software << endl;
    cout << imbaded << endl;
    cout << ai << endl;
    cout << freshmen;
}