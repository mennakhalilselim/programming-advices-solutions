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

int randomNumberInRange(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int array[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        array[i] = randomNumberInRange(1, 100);
    }
}

int searchArray(int array[100], int length, int needle)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == needle)
        {
            return i;
        }
    }
    return -1;
}

void printArray(int array[100], int length)
{
    cout << "Array Elements: ";
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void printSearchResult(int needle, int index)
{
    cout << "Number you're looking for is: " << needle << endl;
    (index == -1) ? (cout << "The number is not found :-(") : (cout << "The number is found at position: " << index << "\nThe number found its order: " << index + 1);
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int array[100];
    int length = readPositiveNumber("How many keys do you want (from 1 to 100): ");

    fillArrayWithRandomNumbers(array, length);
    printArray(array, length);

    int needle = readPositiveNumber("Enter a number you want to search for: ");
    int index = searchArray(array, length, needle);
    printSearchResult(needle, index);
    return 0;
}