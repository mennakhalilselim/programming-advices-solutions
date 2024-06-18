#include <iostream>
#include <cstdlib>
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

int randomNumberInRange(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void randomDigits(int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << randomNumberInRange(1, 9) << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    randomDigits(readPositiveNumber("Enter how many random numbers you want: "));
    return 0;
}