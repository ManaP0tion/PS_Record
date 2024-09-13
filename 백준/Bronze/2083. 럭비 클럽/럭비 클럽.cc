#include <iostream>
using namespace std;

int main(){
    string name;
    int age, weight;
    bool flag = false;
    while(1){
        flag = false;
        cin >> name >> age >> weight;
        if(name == "#" && age == 0 && weight == 0)
            break;
        if(age > 17 || weight >= 80)
            flag = true;
        cout << name << " ";
        if(flag)
            cout << "Senior\n";
        else
            cout << "Junior\n";
    }
}

// flag 재설정안해서 틀림