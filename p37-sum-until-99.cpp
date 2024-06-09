#include <iostream>
using namespace std;

float readNumber()
{
    float num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

float calculateSum()
{
    float num;
    float sum = 0;
    do
    {
        num = readNumber();
        if (num == -99)
        {
            break;
        }
        sum += num;
    } while (num != -99);
    return sum;
}

void printResult(float sum)
{
    cout << "The sum of the entered numbers is: " << sum << endl;
}

int main()
{
    printResult(calculateSum());
    return 0;
}