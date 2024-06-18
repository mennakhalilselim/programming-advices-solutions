#include <iostream>
using namespace std;

enum Operator
{
    add = '+',
    subtract = '-',
    multiply = '*',
    divide = '/',
};

void readNumbers(float &num1, float &num2)
{
    cout << "Enter number1: ";
    cin >> num1;
    cout << "Enter number2: ";
    cin >> num2;
}

Operator readOperator()
{
    char op;
    Operator opp;
    cout << "Enter Operator: ";
    cin >> op;
    opp = (Operator)op;
    return opp;
}

float calculate(float num1, float num2, Operator opp)
{
    float result;
    switch (opp)
    {
    case Operator::add:
        result = num1 + num2;
        break;
    case Operator::subtract:
        result = num1 - num2;
        break;
    case Operator::multiply:
        result = num1 * num2;
        break;
    case Operator::divide:
        result = num1 * num2;
        break;
    }
    return result;
}

void printResult(float result)
{
    cout << "The result is: " << result << endl;
}

int main()
{
    float num1, num2;
    readNumbers(num1, num2);
    printResult(calculate(num1, num2, readOperator()));
}
