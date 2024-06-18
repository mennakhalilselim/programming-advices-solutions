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

void printResult(int needle, int frequency)
{
    cout << "Digit " << needle << " frequency is " << frequency << " times." << endl;
}

int main()
{
    int haystack = readPositiveNumber("Enter a positive number: ");
    int needle = readPositiveNumber("Enter a digit: ");
    int frequency = calculateDigitFrequency(haystack, needle);
    printResult(needle, frequency);
    return 0;
}
