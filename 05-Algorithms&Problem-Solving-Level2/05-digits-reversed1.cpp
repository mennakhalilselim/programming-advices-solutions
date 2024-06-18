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

void reverseNumber(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        cout << num % 10 << endl;
        num /= 10;
    }
}

int main()
{
    reverseNumber(readPositiveNumber("Enter a positive number: "));
    return 0;
}
