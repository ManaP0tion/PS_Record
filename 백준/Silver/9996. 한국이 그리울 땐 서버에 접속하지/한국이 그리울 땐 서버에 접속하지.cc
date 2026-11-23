#include <bits/stdc++.h>
using namespace std;

string pattern, input;
int N;

vector<string> split(const string &input, string delimiter){
    vector<string> result;
    size_t start = 0;
    size_t end = input.find(delimiter);

    while(end != string::npos){
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

bool checkPattern(const string& pattern, const string& s){
    vector<string> p = split(pattern, "*");
    const string& p1 = p[0];
    const string& p2 = p[1];

    if (s.size() < p1.size() + p2.size()) return false;
    if (s.compare(0, p1.size(), p1) != 0) return false;
    if (s.compare(s.size() - p2.size(), p2.size(), p2) != 0) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> pattern;
    for(int i = 0; i < N; i++){
        cin >> input;
        cout << (checkPattern(pattern, input) ? "DA" : "NE") << '\n';
    }
}