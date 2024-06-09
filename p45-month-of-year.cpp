#include <iostream>
using namespace std;

enum Days
{
    january = 1,
    february = 2,
    march = 3,
    april = 4,
    may = 5,
    june = 6,
    july = 7,
    august = 8,
    september = 9,
    october = 10,
    november = 11,
    december = 12
};

int readNumberBetween(string message, int from, int to)
{
    int num;
    do
    {
        cout << message;
        cin >> num;
    } while (num < from || num > to);
    return num;
}

void printMonth(int day)
{
    switch (day)
    {
    case Days::january:
        cout << "january" << endl;
        break;
    case Days::february:
        cout << "february" << endl;
        break;
    case Days::march:
        cout << "march" << endl;
        break;
    case Days::april:
        cout << "april" << endl;
        break;
    case Days::may:
        cout << "may" << endl;
        break;
    case Days::june:
        cout << "june" << endl;
        break;
    case Days::july:
        cout << "july" << endl;
        break;
    case Days::august:
        cout << "august" << endl;
        break;
    case Days::september:
        cout << "september" << endl;
        break;
    case Days::october:
        cout << "october" << endl;
        break;
    case Days::november:
        cout << "november" << endl;
        break;
    case Days::december:
        cout << "december" << endl;
        break;
    }
}

int main()
{
    string message = "Enter a day number: \n(1) JANUARY \n(2) FEBRUARY \n(3) MARCH \n(4) APRIL \n(5) MAY \n(6) JUNE \n(7) JULY \n(8) AUGUST \n(9) SEPTEMBER \n(10) OCTOBER \n(11) NOVEMBER \n(12) DECEMBER\n";
    printMonth(readNumberBetween(message, 1, 12));
    return 0;
}
