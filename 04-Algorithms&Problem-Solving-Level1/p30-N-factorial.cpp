#include <iostream>
using namespace std;

int readNumber()
{
    int N;
    do
    {
        cout << "Please enter a positive number: ";
        cin >> N;
    } while (N < 0);
    return N;
}

int calculateFactorial(int N)
{
    int fact = 1;
    if (!(N == 0 || N == 1))
    {
        for (int i = 2; i <= N; i++)
        {
            fact *= i;
        }
    }
    return fact;
}

void printResult(int fact)
{
    cout << "The factorial is: " << fact << endl;
}

int main()
{
    printResult(calculateFactorial(readNumber()));
}