#include <iostream>
#include <cmath>
using namespace std;

int readNum()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

int mySqrt(float num)
{
    return pow(num, 0.5);
}

int main()
{
    float num = readNum();
    cout << "My sqrt result " << mySqrt(num) << endl;
    cout << "c++ sqrt result " << sqrt(num) << endl;
    return 0;
}