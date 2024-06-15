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

int maxOfArray(int array[100], int length)
{
    int max = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
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

void printMax(int max)
{
    cout << "Max Number: " << max << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int array[100];
    int length = readPositiveNumber("Enter array length from 1 to 100: ");
    fillArrayWithRandomNumbers(array, length);
    printArray(array, length);
    printMax(maxOfArray(array, length));
    return 0;
}