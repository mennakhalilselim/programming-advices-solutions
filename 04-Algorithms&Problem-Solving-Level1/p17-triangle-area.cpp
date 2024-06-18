#include <iostream>
#include <cmath>
using namespace std;

void readNumbers(int &a, int &h)
{
    cout << "Enter triangle base: ";
    cin >> a;
    cout << "Enter triangle height: ";
    cin >> h;
}

float calculateArea(int a, int h)
{
    return 0.5 * a * h;
}

void printArea(float area)
{
    cout << "The area of the triangle is: " << area << endl;
}

int main()
{
    int base, height;
    readNumbers(base, height);
    printArea(calculateArea(base, height));
    return 0;
}