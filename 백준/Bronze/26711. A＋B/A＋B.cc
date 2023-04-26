#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string bigNum_Add(string a, string b) {
    
    long long res=0, al=a.length(), bl=b.length();
    string c;

	for(long long i=0; i<al || i<bl; i++) {
        if(i < al)
            res += a[al-i-1]-'0';
        if(i < bl)
            res += b[bl-i-1]-'0';
            
        c += (res%10)+'0';
        res /= 10;
    }
     
    // 더하고 남은 값이 존재한 경우 붙여줌
    if(res) c += res+'0';
    // 문자열에 반대로 저장되므로 뒤집기
    reverse(c.begin(), c.end());
    
    return c;
}

int main(){
    string a, b, result;
    cin >> a;
    cin >> b;
    cout << bigNum_Add(a, b);
}