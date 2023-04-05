#include <iostream>
using namespace std;

int main() {
	int Angle1, Angle2, Angle3, sum;
	cin >> Angle1 >> Angle2 >> Angle3;
	sum = Angle1 + Angle2 + Angle3;
	if (sum != 180)
		cout << "Error";

	else if (Angle1 == Angle2 && Angle1 == Angle3 )
		cout << "Equilateral";
	else if (Angle1 == Angle2 || Angle1 == Angle3 || Angle2 == Angle3)
		cout << "Isosceles";
	else
		cout << "Scalene";	
}