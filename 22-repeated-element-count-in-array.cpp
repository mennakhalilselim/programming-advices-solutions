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

void readArray(int array[100], int &length)
{
    cout << "Enter array length: ";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cout << "Enter array element [" << i + 1 << "]: ";
        cin >> array[i];
    }
}

int repeatedElementCount(int array[], int length, int needle)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (array[i] == needle)
        {
            count++;
        }
    }
    return count;
}

void printArray(int array[], int length)
{
    cout << "original array: ";
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void printResult(int needle, int frequency)
{
    cout << "Number " << needle << " is repeated " << frequency << " times." << endl;
}

int main()
{
    int array[100], length;
    readArray(array, length);
    int needle = readPositiveNumber("Enter the number you want to check: ");
    int frequency = repeatedElementCount(array, length, needle);
    printArray(array, length);
    printResult(needle, frequency);
    return 0;
}