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

int calculateDigitFrequency(int haystack, int needle)
{
    int frequency = 0;
    while (haystack > 0)
    {
        if (haystack % 10 == needle)
        {
            frequency++;
        }
        haystack /= 10;
    }
    return frequency;
}

void printAllDigitsFrequency(int num)
{
    for (int i = 0; i < 10; i++)
    {
        if (calculateDigitFrequency(num, i) > 0)
        {
            cout << "Digit " << i << " frequency is " << calculateDigitFrequency(num, i) << " times." << endl;
        }
    }
}

int main()
{
    printAllDigitsFrequency(readPositiveNumber("Enter a positive number: "));
    return 0;
}
