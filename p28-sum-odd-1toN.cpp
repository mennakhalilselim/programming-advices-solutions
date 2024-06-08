#include <iostream>
using namespace std;

int readNumber()
{
    int N;
    cout << "Please enter a number: ";
    cin >> N;
    return N;
}

bool isEven(int num)
{
    if (num % 2 != 0)
    {
        return false;
    }
    return true;
}

int calculateSum(int N)
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (!isEven(i))
        {
            sum += i;
        }
    }
    return sum;
}

void printSum(int sum)
{
    cout << "The sum of odd numbers from 1 to N is: " << sum << endl;
}

int main()
{
    printSum(calculateSum(readNumber()));
    return 0;
}