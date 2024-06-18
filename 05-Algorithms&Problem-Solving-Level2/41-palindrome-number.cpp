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

void readArray(int array[100], int &length)
{
    cout << "Enter array length: ";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cout << "Enter array element [" << i + 1 << "]: ";
        cin >> array[i];
    }
}

bool isPalindromeArray(int array[100], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        if (array[i] != array[length - 1 - i])
        {
            return false;
        }
    }
    return true;
}

void printResult(bool isPalindrome)
{
    (isPalindrome) ? cout << "The array is palindrome" : cout << "The array is not palindrome";
    cout << endl;
}

int main()
{
    int array[100], reversed[100], length;
    readArray(array, length);
    printResult(isPalindromeArray(array, length));
    return 0;
}
