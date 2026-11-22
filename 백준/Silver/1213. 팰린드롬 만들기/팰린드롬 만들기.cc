#include <iostream>
using namespace std;

int cnt[200], flag;
char mid;
string input;
string ret;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	cin >> input;
	for (char a : input) cnt[a]++;
	for (int i = 'Z'; i >= 'A'; i--) {
		if (cnt[i]) {
			// 홀수면 가운데 문자로
			if (cnt[i] & 1) {
				mid = char(i); flag++;
				cnt[i]--;
			}
			if (flag == 2) break;
			for (int j = 0; j < cnt[i]; j += 2) {
				ret = char(i) + ret; // 앞에 붙이고
				ret += char(i);      // 뒤에 붙이고
			}
		}
	}
	if (mid) ret.insert(ret.begin() + ret.size() / 2, mid);
	if (flag == 2) cout << "I'm Sorry Hansoo\n";
	else cout << ret << "\n";
}