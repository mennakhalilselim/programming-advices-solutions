#include <iostream>
#include <string>
using namespace std;

void printTableHeader()
{
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n__________________________________________________________________________________________________" << endl;
}

string columnSeparator(int num)
{
    string str = to_string(num) + "    ";
    string separator = str.substr(0, 4) + "|";
    return separator;
}

// Print multiplication table from 1 to 999
void printMultiplicationTable(int from, int to)
{
    printTableHeader();
    for (int i = from; i <= to; i++)
    {
        cout << columnSeparator(i) << "\t";

        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main()
{
    printMultiplicationTable(1, 10);
    return 0;
}