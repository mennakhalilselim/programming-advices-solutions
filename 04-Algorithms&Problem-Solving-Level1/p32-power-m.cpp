#include <iostream>
#include <cmath>
using namespace std;

void readNumber(int &N, int &M)
{
    cout << "Please enter a number: ";
    cin >> N;
    cout << "Please enter a power: ";
    cin >> M;
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
    int N, M;
    readNumber(N, M);
    printResult(calculatePower(N, M));
}
