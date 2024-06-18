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

void printResult(bool isPerfect)
{
    if (isPerfect)
    {
        cout << "The number is perfect." << endl;
    }
    else
    {
        cout << "The number is not perfect." << endl;
    }
}

int main()
{
    printResult(readPositiveNumber("Enter a positive number: "));
    return 0;
}