#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
    string ab = a+b;
    string ba = b+a;
    return ab > ba;
}
int main(){
    int n; 
    bool flag = false;
    cin >> n;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i] != "0")
            flag = true;
    }

    if(flag){
        sort(v.begin(), v.end(), compare);
        for(int i=0; i<n; i++){
            cout << v[i];
        }
    }
    else
        cout << 0;

}