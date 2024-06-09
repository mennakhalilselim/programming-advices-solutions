#include <iostream>
using namespace std;
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

float calculateBTotalBill(float billValue, float serviceFeePercent, float taxPercent)
{
    float billAfterServiceFee = (1 + serviceFeePercent / 100) * billValue;
    float totalBill = (1 + taxPercent / 100) * billAfterServiceFee;
    return totalBill;
}

void printResult(float billValue)
{
    cout << "The total bill is: " << billValue << endl;
}

int main()
{
    printResult(calculateBTotalBill(readPositiveNumber("Enter total bill: "), 10.00, 16.00));
    return 0;
}