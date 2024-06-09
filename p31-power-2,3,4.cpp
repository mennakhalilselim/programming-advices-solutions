#include <iostream>
#include <cmath>
using namespace std;

int readNumber()
{
    int N;
    cout << "Please enter a number: ";
    cin >> N;
    return N;
}

int calculatePower(int num, int power)
{
    return pow(num, power);
}

void printResult(int result)
{
    cout << "The result is: " << result << endl;
}

int main()
{
    int num = readNumber();
    printResult(calculatePower(num, 2));
    printResult(calculatePower(num, 3));
    printResult(calculatePower(num, 4));
}
