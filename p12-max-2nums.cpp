#include <iostream>
using namespace std;

void readNumbers(int &num1, int &num2)
{
    cout << "Enter number1: ";
    cin >> num1;
    cout << "Enter number2: ";
    cin >> num2;
}

int maxOf2Numbers(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    return num2;
}

void printResult(int max)
{
    cout << "The maximum number is: " << max << endl;
}

int main()
{
    int num1, num2;
    readNumbers(num1, num2);
    printResult(maxOf2Numbers(num1, num2));
    return 0;
}