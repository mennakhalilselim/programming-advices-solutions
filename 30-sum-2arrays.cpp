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

void printArray(int array[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void sumTwoArrays(int array1[100], int array2[100], int sum[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        sum[i] = array1[i] + array2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int array1[100], array2[100], sum[100];
    int lengthOfArray = readPositiveNumber("Enter array length from 1 to 100: ");
    fillArrayWithRandomNumbers(array1, lengthOfArray);
    fillArrayWithRandomNumbers(array2, lengthOfArray);
    sumTwoArrays(array1, array2, sum, lengthOfArray);
    cout << "Array1: ";
    printArray(array1, lengthOfArray);
    cout << "Array2: ";
    printArray(array2, lengthOfArray);
    cout << "Sum: ";
    printArray(sum, lengthOfArray);
    return 0;
}