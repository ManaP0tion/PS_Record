#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, string> p;

int main()
{
    int n, m;
    cin >> n >> m;

    string site, pw;
    for(int i=0; i<n; i++){
        cin >> site >> pw;
        p.insert({site, pw});
    }

    for(int i=0; i<m; i++){
        cin >> site;
        cout << p[site] <<"\n";
    }
}