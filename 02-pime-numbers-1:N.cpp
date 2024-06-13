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

bool checkPrime(int num)
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

void checkPrimeInRange(int to)
{
    for (int num = 1; num <= to; num++)
    {
        if (checkPrime(num))
        {
            cout << num << endl;
        }
    }
}

int main()
{
    int to = readPositiveNumber("Enter a positive number: ");
    int primeNumbers[to];
    checkPrimeInRange(to);
}