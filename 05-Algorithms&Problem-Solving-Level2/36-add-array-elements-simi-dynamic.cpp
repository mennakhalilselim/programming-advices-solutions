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

void appendElementToArray(int element, int array[100], int &length)
{
    array[length] = element;
    length++;
}

void appendUserInputToArray(int array[100], int &length)
{
    int ans = 0;
    do
    {
        int element = readPositiveNumber("Please enter a number: ");
        appendElementToArray(element, array, length);
        cout << "Do you want to add more numbers? [0]:No [1]:Yes? ";
        cin >> ans;
    } while (ans != 0);
}

void printArray(int array[100], int length)
{
    cout << "Array length is: " << length << endl;
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
    int length = 0;
    appendUserInputToArray(array, length);
    printArray(array, length);

    return 0;
}