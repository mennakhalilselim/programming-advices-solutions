#include <iostream>
#include <cmath>
using namespace std;

void readNumbers(float &a, float &b, float &c)
{
    cout << "Enter triangle side a: ";
    cin >> a;
    cout << "Enter triangle side b: ";
    cin >> b;
    cout << "Enter triangle side c: ";
    cin >> c;
}

float CircleAreaInscribedInTriangle(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    float t = ((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))));
    float area = M_PI * pow(t, 2);
    return area;
}

void printArea(float area)
{
    cout << "The area of the circle is: " << area << endl;
}

int main()
{
    float a, b, c;
    readNumbers(a, b, c);
    printArea(CircleAreaInscribedInTriangle(a, b, c));
    return 0;
}