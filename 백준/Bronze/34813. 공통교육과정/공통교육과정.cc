#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cin >> name;
	if (name[0] == 'F') cout << "Foundation";
	else if (name[0] == 'C') cout << "Claves";
	else if (name[0] == 'V') cout << "Veritas";
	else if (name[0] == 'E') cout << "Exploration";

	return 0;
}