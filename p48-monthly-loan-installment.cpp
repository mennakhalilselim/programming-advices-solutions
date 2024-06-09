#include <iostream>
using namespace std;

void readNumbers(float &loanAmount, float &months)
{
    cout << "Enter loan amount: ";
    cin >> loanAmount;
    cout << "Enter months: ";
    cin >> months;
}

int calculateMonthlyPayment(float loanAmount, float months)
{
    return loanAmount / months;
}

void printResult(int monthlyPayment)
{
    cout << "The monthly payment is: " << monthlyPayment << endl;
}

int main()
{
    float loanAmount, months;
    readNumbers(loanAmount, months);
    printResult(calculateMonthlyPayment(loanAmount, months));
    return 0;
}