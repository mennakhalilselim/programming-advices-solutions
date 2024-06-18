#include <iostream>
using namespace std;

void readNumbers(int &num1, int &num2)
{
    cout << "Enter number1: ";
    cin >> num1;
    cout << "Enter number2: ";
    cin >> num2;
}

void swapNumbers(int &num1, int &num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

void printNumbers(int num1, int num2)
{
    cout << "num1 = " << num1 << '\n'
         << "num2 = " << num2 << endl;
}

int main()
{
    int num1, num2;
    readNumbers(num1, num2);
    swapNumbers(num1, num2);
    printNumbers(num1, num2);
    return 0;
}