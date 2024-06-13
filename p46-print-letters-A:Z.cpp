#include <iostream>
using namespace std;

void printLetters(char from, char to)
{
    for (char i = from; i <= to; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    printLetters('A', 'Z');
    return 0;
}