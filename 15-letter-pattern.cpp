#include <iostream>
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

void printNumberPattern(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char character = i + 64;
            cout << character;
        }
        cout << "\n";
    }
}

int main()
{
    printNumberPattern(readPositiveNumber("Enter a positive number: "));
    return 0;
}
