#include <iostream>
using namespace std;

float readGrade(int from, int to)
{
    int grade;
    do
    {
        cout << "Please grade between " << from << " to " << to << ": ";
        cin >> grade;
    } while (grade < from || grade > to);
    return grade;
}

char getGrade(int grade)
{
    if (grade >= 90)
    {
        return 'A';
    }
    else if (grade >= 89)
    {
        return 'B';
    }
    else if (grade >= 79)
    {
        return 'C';
    }
    else if (grade >= 69)
    {
        return 'D';
    }
    else if (grade >= 59)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

void printGrade(char grade)
{
    cout << "Your grade is: " << grade << endl;
}
int main()
{
    printGrade(getGrade(readGrade(0, 100)));
    return 0;
}