#include <iostream>
#include <cmath>
using namespace std;

float readNum()
{
    float num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

int myCeil(float num)
{
    return (num > 0) ? (int)num + 1 : (int)num;
}

int main()
{
    float num = readNum();
    cout << "My ceil result " << myCeil(num) << endl;
    cout << "c++ ceil result " << ceil(num) << endl;
    return 0;
}