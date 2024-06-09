#include <iostream>
#include <cmath>
using namespace std;

void readNumbers(float &loanAmount, float &monthlyPayment)
{
    cout << "Enter loan amount: ";
    cin >> loanAmount;
    cout << "Enter monthly payment: ";
    cin >> monthlyPayment;
}

int calculateMonths(float loanAmount, float monthlyPayment)
{
    return ceil(loanAmount / monthlyPayment);
}

void printResult(int months)
{
    cout << "The number of months is: " << months << " months" << endl;
}

int main()
{
    float loanAmount, monthlyPayment;
    readNumbers(loanAmount, monthlyPayment);
    printResult(calculateMonths(loanAmount, monthlyPayment));
    return 0;
}