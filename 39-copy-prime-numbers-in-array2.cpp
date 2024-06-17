#include <iostream>
#include <cmath>
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

bool isPrime(int num)
{
    if (num > 2)
    {
        for (int i = 2; i <= round(num / 2); i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void appendElementToArray(int element, int array[100], int &length)
{
    array[length] = element;
    length++;
}

void copyPrimeNumbersInArray(int array[100], int copy[100], int lengthOfArray, int &lengthOfCopy)
{
    for (int i = 0; i < lengthOfArray; i++)
    {
        if (isPrime(array[i]))
        {
            appendElementToArray(array[i], copy, lengthOfCopy);
        }
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
    int array[100], copy[100], lengthOfCopy = 0;
    int lengthOfArray = readPositiveNumber("Enter array length from 1 to 100: ");
    fillArrayWithRandomNumbers(array, lengthOfArray);
    copyPrimeNumbersInArray(array, copy, lengthOfArray, lengthOfCopy);
    cout << "Original Array: " << endl;
    printArray(array, lengthOfArray);
    cout << "Copy Array: " << endl;
    printArray(copy, lengthOfCopy);
    return 0;
}