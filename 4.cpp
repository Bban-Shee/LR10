#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

const int X = 4;
float F(float p, float t);

int main()
{
	float a;
	cout << "Enter the parameter value: ";
	cin >> a;

	float p = pow(X, 2) - sqrt(abs(X));
	float t = pow((X + pow(a, 2)), 1.0 / 3.0);

	cout << "\nFunction y = " << round(F(p, t) * 100) / 100 << endl;
}

float F(float p, float t)
{
	float y = pow(p, 2) + pow(t, 4);
	return y;
}