#include <iostream>
using namespace std;

void readMarks(float &mark1, float &mark2, float &mark3)
{
    cout << "Enter mark1: ";
    cin >> mark1;
    cout << "Enter mark2: ";
    cin >> mark2;
    cout << "Enter mark3: ";
    cin >> mark3;
}

float calculateSum(float mark1, float mark2, float mark3)
{
    return mark1 + mark2 + mark3;
}

float calculateAverage(float mark1, float mark2, float mark3)
{
    float sum = calculateSum(mark1, mark2, mark3);
    return sum / 3;
}

bool isPassed(float avg)
{
    return avg >= 50;
}

void printResult(float avg)
{
    if (avg)
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
    float mark1, mark2, mark3;
    readMarks(mark1, mark2, mark3);
    printResult(isPassed(calculateAverage(mark1, mark2, mark3)));
}