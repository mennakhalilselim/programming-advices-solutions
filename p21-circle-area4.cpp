#include <iostream>
#include <cmath>
using namespace std;

float readCircleCircumference()
{
    float l;
    cout << "Enter Circle Circumference: ";
    cin >> l;
    return l;
}

float CircleAreaByCircumference(float l)
{
    return pow(l, 2) / (4 * M_PI);
}

void printArea(float area)
{
    cout << "The area of the circle is: " << area << endl;
}

int main()
{
    printArea(CircleAreaByCircumference(readCircleCircumference()));
    return 0;
}