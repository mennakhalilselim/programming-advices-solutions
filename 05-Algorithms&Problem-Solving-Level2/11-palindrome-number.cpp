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

int reverseNumber(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

bool isPalindrome(int num)
{
    return num == reverseNumber(num);
}

void printResult(bool isPalindrome)
{
    if (isPalindrome)
    {
        cout << "The number is palindrome" << endl;
    }
    else
    {
        cout << "The number is not palindrome" << endl;
    }
}

int main()
{
    printResult(isPalindrome(readPositiveNumber("Enter a positive number: ")));
    return 0;
}
