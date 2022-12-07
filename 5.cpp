#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

float func(float x, float y, float a);

int main()
{
	float x, y, a;
	
	cout << "Enter the value of variable x: ";
	cin >> x;
	cout << "Enter the value of variable y: ";
	cin >> y;
	cout << "Enter the value of variable a: ";
	cin >> a;

	if ((pow(x, 2) - y + 1) == 0 || (pow(x, 2) - exp(x) - 2) == 0)
	{
		cout << "\nError: the entered variables do not belong to the scope of the function definition. Try again!\n";
		return 1;
	}
	else
	{
		float result = round(func(x, y, a) * 100) / 100;
		cout << "\nThe value of the expression is equal to " << result << endl;
	}	
}

float func(float x, float y, float a)
{
		float f = ((pow(y, 2) - x) / (pow(x, 2) - y + 1)) - ((pow(a, 2) - x + 2) / (pow(x, 2) - exp(x) - 2));
		return f;
}