#include <iostream>
using namespace std;

int main()
{
    float x;
    cout << "Enter the cost of a written translation of one page of the text: ";
    cin >> x;
    if (x < 0)
    {
        cout << "\nError: the cost of a translation cannot be less thaan 0. Try again!\n";
        return 1;
    }

    int n;
    cout << "Enter the number of pages: ";
    cin >> n;
    if (n < 0)
    {
        cout << "\nError: the number of pages cannot be less than 0. Try again!\n";
        return 1;
    }
    
    cout << "\nTranslator`s salary: " << x * n << " UAH\n";
}