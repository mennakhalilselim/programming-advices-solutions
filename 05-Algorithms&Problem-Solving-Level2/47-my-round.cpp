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

int myRound(float num)
{
    return (num >= 0) ? (num + 0.5) : (num - 0.5);
}

int main()
{
    float num = readNum();
    cout << "My round result " << myRound(num) << endl;
    cout << "c++ round result " << round(num) << endl;
    return 0;
}