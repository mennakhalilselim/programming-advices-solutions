#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumberInRange(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

char randomLowerLetter()
{
    return randomNumberInRange('a', 'z');
}

char randomCapitalLetter()
{
    return randomNumberInRange('A', 'Z');
}

char randomSpecialChar()
{
    return randomNumberInRange(33, 47);
}

int randomDigit()
{
    return randomNumberInRange(0, 9);
}

int main()
{
    srand((unsigned)time(NULL));
    cout << randomLowerLetter() << endl;
    cout << randomCapitalLetter() << endl;
    cout << randomSpecialChar() << endl;
    cout << randomDigit() << endl;
    return 0;
}