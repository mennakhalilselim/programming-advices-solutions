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

bool isPrime(int num)
{
    if (num > 2)
    {
        for (int i = 2; i <= round(num / 2); i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void printResult(bool isPrime)
{
    if (isPrime)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "NOT Prime" << endl;
    }
}

int main()
{
    printResult(isPrime(readPositiveNumber("Enter a positive number: ")));
}