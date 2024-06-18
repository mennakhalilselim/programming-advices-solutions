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
        array[i] = randomNumberInRange(-100, 100);
    }
}

bool isPositive(int num)
{
    return (num >= 0) ? true : false;
}

int countNegativeNumbersInArray(int array[100], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (!isPositive(array[i]))
        {
            count++;
        }
    }
    return count;
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
    int array[100];
    int lengthOfArray = readPositiveNumber("Enter array length from 1 to 100: ");
    fillArrayWithRandomNumbers(array, lengthOfArray);
    printArray(array, lengthOfArray);

    int evenNumbersCount = countNegativeNumbersInArray(array, lengthOfArray);
    cout << "Negative Numbers count is: " << evenNumbersCount << endl;
    return 0;
}