#include <iostream>
#include <cmath>
using namespace std;

float readSquareSide()
{
    float A;
    cout << "Enter square side: ";
    cin >> A;
    return A;
}

float calculateArea(float A)
{
    return (M_PI * pow(A, 2)) / 4;
}

void printArea(float area)
{
    cout << "The area of the circle is: " << area << endl;
}

int main()
{
    printArea(calculateArea(readSquareSide()));
    return 0;
}