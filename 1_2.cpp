#include <iostream>
#include <cmath>
using namespace std;

class Fabric
{
public:
	float cost, width;

	Fabric(float cost, float width)
	{
		this->cost = cost;
		this->width = width;
	}

	void print()
	{
		cout << "Price per meter of fabric: " << this->cost << " UAH\n";
		cout << "The fabric width: " << this->width << " m\n";
	}
};

int main()
{
	Fabric fabric(50, 1.5);
	if (fabric.cost < 0)
	{
		cout << "Error: the price per meter of fabric cannot be less than 0. Try again!\n";
		return 1;
	}
	else if (fabric.width < 0)
	{
		cout << "Error: the fabric width cannot be less than 0. Try again!\n";
		return 1;
	}
	fabric.print();

	float length, width;
	cout << "\nEnter the length of the piece of fabric: ";
	cin >> length;
	cout << "Enter the width of the piece of fabric: ";
	cin >> width;
	
	if (length < 0 || width < 0)
	{
		cout << "\nError: the piece of fabric size cannot be less than 0. Try again!\n";
		return 1;
	}
	cout << "\nFabric cut size: " << width << "x" << length << " (m)\n";

	float tcost = (fabric.cost / fabric.width * 1) * width * length;
	cout << "Cost of the piece of fabric: " << round(tcost * 100) /100 << " UAH\n";
}