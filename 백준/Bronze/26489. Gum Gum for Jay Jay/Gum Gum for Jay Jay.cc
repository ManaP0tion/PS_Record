#include <iostream>
using namespace std;

int main() {

  string line = ""; int cnt = 0;

  while (getline(cin, line))
    cnt++;

  cout << cnt;

}