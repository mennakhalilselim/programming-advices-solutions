#include <iostream>
using namespace std;

struct Duration
{
    int days;
    int hours;
    int minutes;
    int seconds;
};
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

Duration calculateDuration(int seconds)
{
    Duration duration;
    duration.days = seconds / 86400;
    int remainder = seconds % 86400;
    duration.hours = remainder / 3600;
    remainder = remainder % 3600;
    duration.minutes = remainder / 60;
    duration.seconds = remainder % 60;
    return duration;
}

void printResult(Duration duration)
{
    cout << duration.days << "d " << duration.hours << "h " << duration.minutes << "m " << duration.seconds << "s" << endl;
}

int main()
{
    printResult(calculateDuration(readPositiveNumber("Enter number of seconds: ")));
    return 0;
}
