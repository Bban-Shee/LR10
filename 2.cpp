#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

const int VARIANT = 6;

class Point
{
public:
	int x, y;
	
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

class Triangle
{
public:
	float side_ab, side_bc, side_ac;
	
	Triangle(Point A, Point B, Point C)
	{
		side_ab = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
		side_bc = sqrt(pow(C.x - B.x, 2) + pow(C.y - B.y, 2));
		side_ac = sqrt(pow(C.x - A.x, 2) + pow(C.y - A.y, 2));
	}

	float get_bisector(float side)
	{
		float bisector;
		
		if (side == side_bc)
			bisector = (sqrt(side_ab * side_ac * (side_ab + side_ac + side_bc) * (side_ab + side_ac - side_bc)) / (side_ab + side_ac));
		else if (side == side_ac)
			bisector = (sqrt(side_ab * side_bc * (side_ab + side_bc + side_ac) * (side_ab + side_bc - side_ac)) / (side_ab + side_bc));
		else if (side == side_ab)
			bisector = (sqrt(side_ac * side_bc * (side_ac + side_bc + side_ab) * (side_ac + side_bc - side_ab)) / (side_ac + side_bc));
		else
		{
			cout << "Error: no such side exists. Try again!\n";
			return 1;
		}
		return bisector;
	}

	float get_cricumradius()
	{
		float p = (side_ab + side_bc + side_ac) / 2;
		float cricumradius = (side_ab * side_bc * side_ac) / (4 * sqrt(p * (p - side_ab) * (p - side_bc) * (p - side_ac)));
		return cricumradius;
	}
};

int main()
{
	Point A(0, 0), B(VARIANT, VARIANT - 1), C(-VARIANT, VARIANT + 1);
	cout << "The vertices of the triangle with coordinates are given: A(0;0), B(" << B.x << ";" << B.y << "), C(" << C.x << ";" << C.y << ")\n";

	Triangle triangle (A, B, C);
	if ((triangle.side_ab + triangle.side_bc) < triangle.side_ac || (triangle.side_ab + triangle.side_ac) < triangle.side_bc || (triangle.side_ac + triangle.side_bc) < triangle.side_ab)
	{ 
		cout << "A triangle with such sides cannot exist.\n";
		return 1;
	}
	else
	{
		cout << "So, we have a triangle with sides: AB = " << round(triangle.side_ab * 100) / 100 << ", BC = " << round(triangle.side_bc * 100) / 100 << ", AC = " << round(triangle.side_ac * 100) / 100 << endl;

		float w = triangle.get_bisector(triangle.side_bc);
		float R = triangle.get_cricumradius();

		cout << "\nThe bisector of the triangle is equal to " << round(w * 100) / 100 << endl;
		cout << "The radius of the circumscribed circle is equal to " << round(R * 100) / 100 << endl;
	}
}