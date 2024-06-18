#include <iostream>
using namespace std;

void readNumbers(float &totalBill, float &cashPaid)
{
    cout << "Enter total bill: ";
    cin >> totalBill;
    cout << "Enter cash paid: ";
    cin >> cashPaid;
}

float calculateBillRemainder(float totalBill, float cashPaid)
{
    return cashPaid - totalBill;
}

void printResult(float remainder)
{
    cout << "The bill remainder is: " << remainder << endl;
}

int main()
{
    float totalBill, cashPaid;
    readNumbers(totalBill, cashPaid);
    printResult(calculateBillRemainder(totalBill, cashPaid));
    return 0;
}