#include <iostream>
using namespace std;

int readNumber()
{
    int N;
    cout << "Please enter a number: ";
    cin >> N;
    return N;
}

void printNumber(int N)
{
    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    printNumber(readNumber());
}