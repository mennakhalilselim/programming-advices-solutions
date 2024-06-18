#include <iostream>
using namespace std;

float readNumber()
{
    float num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

float calculateHalfNumber(float num)
{
    float halfNum = num / 2;
    return halfNum;
}

void printResult(float num, float halfNum)
{
    cout << "Half of the " << num << " is " << halfNum << endl;
}

int main()
{
    float num = readNumber();
    printResult(num, calculateHalfNumber(num));
    return 0;
}