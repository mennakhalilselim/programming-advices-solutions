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

bool isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return num == sum;
}

void printPerfectNumbersFrom1toN(int to)
{
    for (int num = 1; num <= to; num++)
    {
        if (isPerfect(num))
        {
            cout << num << endl;
        }
    }
}

int main()
{
    printPerfectNumbersFrom1toN(readPositiveNumber("Enter a positive number: "));
    return 0;
}