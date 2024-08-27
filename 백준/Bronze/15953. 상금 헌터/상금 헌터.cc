#include <iostream>
using namespace std;

unsigned int calc(uint a, uint b){
    if(a == 0 || a > 21) a = 0;

    else{
         if(a==1) a=5000000;
        else if(3>=a) a=3000000;
        else if(6>=a) a=2000000;
        else if(10>=a) a= 500000;
        else if(15>=a) a=300000;
        else a=100000;
    }

    if(b>31||b==0) b=0; 
    else{
        if(b==1) b=5120000;
        else if(3>=b) b=2560000;
        else if(7>=b) b=1280000;
        else if(15>=b) b= 640000;
        else  b=320000;
    }
    return a+b;

}

int main(){
    unsigned int n, a, b;
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << calc(a,b) << "\n";
    }
}