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

char randomCapitalLetter()
{
    return randomNumberInRange('A', 'Z');
}

string generateKey()
{
    string key = "";
    for (int i = 1; i <= 16; i++)
    {
        key += randomCapitalLetter();
        if (i % 4 == 0 && i != 16)
        {
            key += "-";
        }
    }
    return key;
}

void fillArrayWithKeys(string array[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        array[i] = generateKey();
    }
}

void printArray(string array[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "Array[" << i << "]: " << array[i] << endl;
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    string array[100];
    int length = readPositiveNumber("How many keys do you want (from 1 to 100): ");

    fillArrayWithKeys(array, length);
    printArray(array, length);
    return 0;
}