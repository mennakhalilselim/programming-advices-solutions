#include <iostream>
using namespace std;

void readNumbers(int &width, int &height)
{
    cout << "Enter rectangle width: ";
    cin >> width;
    cout << "Enter rectangle height: ";
    cin >> height;
}

int calculateArea(int width, int height)
{
    return width * height;
}

void printArea(int area)
{
    cout << "The area of the rectangle is: " << area << endl;
}

int main()
{
    int width, height;
    readNumbers(width, height);
    printArea(calculateArea(width, height));
    return 0;
}