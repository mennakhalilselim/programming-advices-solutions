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
    int counter = 0;
    int correctPin = 1234;
    do
    {
        int enteredPin = readPIN();
        bool isCorrect = checkPIN(enteredPin, correctPin);
        if (isCorrect)
        {
            printResult(isCorrect);
            break;
        }
        counter++;
    } while (counter < 3);
    return 0;
}
