#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    int n, count = 0;
    set <string> user;
    string line;
    cin >> n;
    while(n--){
        cin >> line;
        if(line == "ENTER"){
            count += user.size();
            user.clear();
            continue;
        }
        user.insert(line);
    }
    count += user.size();
    cout << count;
}