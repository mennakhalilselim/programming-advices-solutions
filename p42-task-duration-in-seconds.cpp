#include <iostream>
using namespace std;

struct Duration
{
    int days;
    int hours;
    int minutes;
    int seconds;
};

Duration readDuration(string message)
{
    Duration duration;
    cout << message;
    cin >> duration.days;
    cin >> duration.hours;
    cin >> duration.minutes;
    cin >> duration.seconds;
    return duration;
}

float calculateSeconds(Duration duration)
{
    return duration.days * 86400 + duration.hours * 3600 + duration.minutes * 60 + duration.seconds;
}

void printResult(float seconds)
{
    cout << "The duration in seconds is: " << seconds << endl;
}

int main()
{
    printResult(calculateSeconds(readDuration("Enter duration in days, hours, minutes, seconds: ")));
    return 0;
}