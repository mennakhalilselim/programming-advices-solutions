#include <iostream>
#include <cmath>
using namespace std;

float readDiameter()
{
    float D;
    cout << "Enter circle diameter: ";
    cin >> D;
    return D;
}

float calculateArea(float D)
{
    return (M_PI * pow(D, 2)) / 4;
}

void printArea(float area)
{
    cout << "The area of the circle is: " << area << endl;
}

int main()
{
    printArea(calculateArea(readDiameter()));
    return 0;
}