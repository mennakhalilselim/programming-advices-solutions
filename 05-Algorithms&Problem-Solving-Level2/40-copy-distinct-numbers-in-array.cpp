#include <iostream>
#include <cmath>
using namespace std;

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

void appendElementToArray(int element, int array[100], int &length)
{
    array[length] = element;
    length++;
}

void copyDistinctNumbersInArray(int array[100], int copy[100], int lengthOfArray, int &lengthOfCopy)
{
    for (int i = 0; i < lengthOfArray; i++)
    {
        if (!checkNumerInArray(copy, lengthOfCopy, array[i]))
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
    int array[10] = {10, 10, 10, 50, 50, 70, 70, 70, 70, 90};
    int copy[10];
    int lengthOfCopy = 0;
    int lengthOfArray = 10;

    copyDistinctNumbersInArray(array, copy, lengthOfArray, lengthOfCopy);
    cout << "Original Array: " << endl;
    printArray(array, lengthOfArray);
    cout << "Copy Array: " << endl;
    printArray(copy, lengthOfCopy);
    return 0;
}