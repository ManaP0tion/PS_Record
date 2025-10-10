#include <iostream>
#include <string>
using namespace std;

int main(){
    string x;
    cin >> x;

    int cnt = 0;

    while(x.size() > 1)
    {
        int sum = 0;
        for(char c : x)
            sum += c - '0';
        x = to_string(sum);
        cnt++;
    }


    cout << cnt << "\n";
    cout << ((stoi(x) % 3 == 0) ? "YES" : "NO");
}