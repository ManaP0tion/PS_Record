#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

vector<ll> v;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    string temp = "";
    for(int i = 0; i<s.length(); i++){
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end(), greater<ll>());
    for(int i = 0; i<v.size(); i++){
        temp += v[i];
    }
    answer = stoll(temp);
    return answer;
}