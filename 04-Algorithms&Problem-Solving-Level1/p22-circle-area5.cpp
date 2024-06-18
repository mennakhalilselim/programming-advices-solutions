#include <iostream>
#include <cmath>
using namespace std;

void readNumbers(float &a, float &b)
{
    cout << "Enter triangle iso side length: ";
    cin >> a;
    cout << "Enter triangle base: ";
    cin >> b;
}

float CircleAreaInscribedInIsoTriangle(float a, float b)
{
    return M_PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

void printArea(float area)
{
    cout << "The area of the circle is: " << area << endl;
}

int main()
{
    float a, b;
    readNumbers(a, b);
    printArea(CircleAreaInscribedInIsoTriangle(a, b));
    return 0;
}