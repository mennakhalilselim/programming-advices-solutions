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

void fillOrderedArray(int array[100], int length)
{
    for (int i = 0; i <= length; i++)
    {
        array[i] = i + 1;
    }
}

int randomNumberInRange(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void shuffleArray(int array[100], int length)
{
    int temp = 0;
    int randomIndex = 0;
    for (int i = 0; i < length; i++)
    {
        temp = array[i];
        randomIndex = randomNumberInRange(0, length - 1);
        array[i] = array[randomIndex];
        array[randomIndex] = temp;
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
    int length = readPositiveNumber("Enter array length from 1 to 100: ");

    fillOrderedArray(array, length);
    cout << "Array elements before shuffle: ";
    printArray(array, length);

    shuffleArray(array, length);
    cout << "Array elements afetr shuffle: ";
    printArray(array, length);
    return 0;
}