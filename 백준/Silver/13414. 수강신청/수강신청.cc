#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	int k, l;
	cin >> k >> l;
	
	string studentId;

	unordered_map<string, int> waiting_list;
	int cnt = 0;
	
	while (l--) {
		cin >> studentId;
		waiting_list[studentId] = cnt;
		cnt++;
	}

	vector<pair<int, string>> result_list;
	for (auto student : waiting_list) {
		result_list.push_back({ student.second, student.first });
	}
	sort(result_list.begin(), result_list.end());

	for (int i = 0; i < k && i < result_list.size(); i++)
		cout << result_list[i].second << "\n";
}