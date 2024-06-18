#include <iostream>
#include <cmath>
using namespace std;

void readNumbers(int &a, int &d)
{
    cout << "Enter rectangle side: ";
    cin >> a;
    cout << "Enter rectangle diagonal: ";
    cin >> d;
}

float calculateArea(int a, int d)
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

void printArea(float area)
{
    cout << "The area of the rectangle is: " << area << endl;
}

int main()
{
    int side, diagonal;
    readNumbers(side, diagonal);
    printArea(calculateArea(side, diagonal));
    return 0;
}