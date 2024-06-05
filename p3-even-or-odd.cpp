#include <iostream>
using namespace std;

enum NumberType
{
    even,
    odd
};

int readNum()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

NumberType checkNumberType(int num)
{
    if (num % 2 == 0)
    {
        return NumberType::even;
    }
    else
    {
        return NumberType::odd;
    }
}

void printNumberType(NumberType type)
{
    if (type == NumberType::even)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }
}

int main()
{
    int num = readNum();
    NumberType type = checkNumberType(num);
    printNumberType(type);
    // printNumberType(checkNumberType(readNum()));
    return 0;
}