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

void copyArrayInReverseOrder(int array[100], int copy[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        copy[i] = array[length - i - 1];
    }
}

void printArray(int array[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int array[100];
    int copy[100];
    int length = readPositiveNumber("Enter array length from 1 to 100: ");

    fillArrayWithRandomNumbers(array, length);
    cout << "Original Array: ";
    printArray(array, length);

    copyArrayInReverseOrder(array, copy, length);
    cout << "Copy Array: ";
    printArray(copy, length);
    return 0;
}