#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	float alpha;
	cout << "Enter the value of the variable: ";
	cin >> alpha;

	float z1 = cos(alpha) + cos(2 * alpha) + cos(6 * alpha) + cos(7 * alpha);
	float z2 = 4 * cos(alpha * 0.5) * cos(alpha * 2.5) * cos(4 * alpha);

	if ((round(z1 * 100) / 100) == (round(z2 * 100) / 100))
		cout << "\nThe value of the expression z1 = z2 = " << round(z1 * 100) / 100 << endl;
	else
	{
		cout << "\nThe value of the expression z1 = " << z1 << endl;
		cout << "The value of the expression z2 = " << z2 << endl;
	}
}