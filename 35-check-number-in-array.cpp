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

bool checkNumerInArray(int array[100], int length, int needle)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == needle)
        {
            return true;
        }
    }
    return false;
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

void printSearchResult(int array[100], int length, int needle)
{
    cout << "Number you're looking for is: " << needle << endl;
    (checkNumerInArray(array, length, needle)) ? (cout << "The number is found") : (cout << "The number is not found :-(");
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
    printSearchResult(array, length, needle);
    return 0;
}