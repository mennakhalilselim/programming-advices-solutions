#include <iostream>
using namespace std;

float readMark()
{
    float mark;
    cout << "Enter your mark: ";
    cin >> mark;
    return mark;
}

bool isPassed(float mark)
{
    return mark >= 50;
}

void printResult(bool isPassed)
{
    if (isPassed)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }
}

int main()
{
    printResult(isPassed(readMark()));
    return 0;
}