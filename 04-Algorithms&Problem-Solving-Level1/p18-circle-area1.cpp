#include <iostream>
#include <cmath>
using namespace std;

float readRadius()
{
    float r;
    cout << "Enter circle radius: ";
    cin >> r;
    return r;
}

float calculateArea(float r)
{
    return M_PI * pow(r, 2);
}

void printArea(float area)
{
    cout << "The area of the circle is: " << area << endl;
}

int main()
{
    printArea(calculateArea(readRadius()));
    return 0;
}