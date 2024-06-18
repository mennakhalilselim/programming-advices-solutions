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

int myFloor(float num)
{
    return (num >= 0) ? (int)num : (int)num - 1;
}

int main()
{
    float num = readNum();
    cout << "My floor result " << myFloor(num) << endl;
    cout << "c++ floor result " << floor(num) << endl;
    return 0;
}