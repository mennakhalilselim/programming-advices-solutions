#include <iostream>
using namespace std;

int readAge()
{
    int age;
    cout << "Please Enter Your Age: ";
    cin >> age;
    return age;
}

bool validateNumberInRange(int age, int from, int to)
{
    return (age >= from && age <= to);
}

void printResult(bool isValid)
{
    if (isValid)
    {
        cout << "Valid Age";
    }
    else
    {
        cout << "Invalid Age";
    }
}

int main()
{
    printResult(validateNumberInRange(readAge(), 18, 45));
    return 0;
}