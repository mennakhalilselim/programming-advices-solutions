#include <iostream>
#include <cmath>
using namespace std;

int readPositiveNumber(string message)
{
    int num;
    do
    {
        cout << message;
        cin >> num;
    } while (num < 0);
    return num;
}

int getNumberDivisor(int num)
{
    int numLog = log10(num);
    return pow(10, numLog);
}

void printDigitsInOrder(int num)
{
    while (num > 0)
    {
        int length = getNumberDivisor(num);
        cout << num / length << endl;
        num = num % length;
    }
}

int main()
{
    printDigitsInOrder(readPositiveNumber("Enter a positive number: "));
    return 0;
}
