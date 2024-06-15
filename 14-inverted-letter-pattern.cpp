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

void printInvertedPattern(int num)
{
    for (int i = num; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            char character = i + 64;
            cout << character;
        }
        cout << "\n";
    }
}

int main()
{
    printInvertedPattern(readPositiveNumber("Enter a positive number: "));
    return 0;
}
