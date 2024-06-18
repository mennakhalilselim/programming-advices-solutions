#include <iostream>
using namespace std;

enum Days
{
    SUNDAY = 1,
    MONDAY = 2,
    TUESDAY = 3,
    WEDNESDAY = 4,
    THURSDAY = 5,
    FRIDAY = 6,
    SATURDAY = 7,
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

void printDay(int day)
{
    switch (day)
    {
    case Days::SUNDAY:
        cout << "SUNDAY" << endl;
        break;
    case Days::MONDAY:
        cout << "MONDAY" << endl;
        break;
    case Days::TUESDAY:
        cout << "TUESDAY" << endl;
        break;
    case Days::WEDNESDAY:
        cout << "WEDNESDAY" << endl;
        break;
    case Days::THURSDAY:
        cout << "THURSDAY" << endl;
        break;
    case Days::FRIDAY:
        cout << "FRIDAY" << endl;
        break;
    case Days::SATURDAY:
        cout << "SATURDAY" << endl;
        break;
    }
}

int main()
{
    string message = "Enter a day number: \n(1) SUNDAY \n(2) MONDAY \n(3) TUESDAY \n(4) WEDNESDAY \n(5) THURSDAY \n(6) FRIDAY \n(7) SATURDAY\n";
    printDay(readNumberBetween(message, 1, 7));
    return 0;
}
