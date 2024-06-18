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

void appendElementToArray(int element, int array[100], int &length)
{
    array[length] = element;
    length++;
}

void copyArray(int array[100], int copy[100], int length, int &length2)
{
    for (int i = 0; i < length; i++)
    {
        appendElementToArray(array[i], copy, length2);
    }
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

int main()
{
    srand((unsigned)time(NULL));
    int array[100], copy[100];
    int length1 = readPositiveNumber("Enter array length from 1 to 100: ");
    fillArrayWithRandomNumbers(array, length1);

    int length2 = 0;
    copyArray(array, copy, length1, length2);

    cout << "Original Array: " << endl;
    printArray(array, length1);

    cout << "Copy Array: " << endl;
    printArray(copy, length2);
    return 0;
}