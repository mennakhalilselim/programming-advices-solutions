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

void readUntilNumberInRange(int from, int to)
{
    int age;
    do
    {
        age = readAge();
    } while (!validateNumberInRange(age, from, to));
}

void printResult()
{
    cout << "Valid Age";
}

int main()
{
    readUntilNumberInRange(18, 45);
    printResult();
    return 0;
}