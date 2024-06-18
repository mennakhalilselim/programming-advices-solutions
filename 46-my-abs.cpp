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

int myAbs(int num)
{
    return (num < 0) ? -num : num;
}

int main()
{
    int num = readNum();
    cout << "My abs result " << myAbs(num) << endl;
    cout << "c++ abs result " << abs(num) << endl;
    return 0;
}