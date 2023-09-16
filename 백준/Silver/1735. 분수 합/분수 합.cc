#include <iostream>
using namespace std;

int GCM(long long A, long long B) {
	int temp = A % B;
	if (temp == 0) {
		return B;
	}
	else {
		return GCM(B, temp);
	}
	
}

int main() {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int A, B, C,D;
	cin >> A >> B;
	cin >> C >> D;

	int ResultB = B * D;
	int ResultA = (A * D) + (C * B);

	int gcm = GCM(ResultA, ResultB);
	ResultA /= gcm;
	ResultB /= gcm;

	cout << ResultA << " " << ResultB << "\n";

	return 0;
}