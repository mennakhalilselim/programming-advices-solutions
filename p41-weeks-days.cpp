#include <iostream>
using namespace std;

float readPositiveNumber(string message)
{
    float num;
    do
    {
        cout << message;
        cin >> num;
    } while (num < 0);
    return num;
}

float numberOfDays(float hours)
{
    return hours / 24;
}

float numberOfWeeks(float days)
{
    return days / 7;
}

void printResult(float days, float weeks)
{
    cout << "The number of days is: " << days << '\n'
         << "The number of weeks is: " << weeks << endl;
}

int main()
{
    float hours = readPositiveNumber("Enter number of hours: ");
    float days = numberOfDays(hours);
    float weeks = numberOfWeeks(days);
    printResult(days, weeks);
    return 0;
}
