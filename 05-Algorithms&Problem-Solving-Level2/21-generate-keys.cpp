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

void printManyKeys(int count)
{
    for (int i = 1; i <= count; i++)
    {
        cout << "Key [" << i << "]: " << generateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    printManyKeys(readPositiveNumber("Enter how many keys you want: "));
    return 0;
}