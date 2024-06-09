#include <iostream>
using namespace std;

int readPIN()
{
    int pin;
    cout << "Enter PIN: ";
    cin >> pin;
    return pin;
}

bool checkPIN(int enteredPin, int correctPin)
{
    return enteredPin == correctPin;
}

void printResult(bool isCorrect)
{
    if (isCorrect)
    {
        cout << "Your balance is 7500" << endl;
    }
    else
    {
        cout << "Wrong PIN" << endl;
    }
}

int main()
{
    int correctPin = 1234;
    int enteredPin = readPIN();
    printResult(checkPIN(enteredPin, correctPin));
    return 0;
}
