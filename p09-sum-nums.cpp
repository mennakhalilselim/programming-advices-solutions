#include <iostream>
using namespace std;

void readNumbers(int numbers[], int &length)
{
    cout << "How many numbers you want to calculate: ";
    cin >> length;
    int counter = 0;
    while (counter < length)
    {
        cout << "Please enter number" << counter + 1 << ": ";
        cin >> numbers[counter];
        counter++;
    }
}

float calculateSum(int numbers[], int length)
{
    float sum;
    for (short int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }
    return sum;
}

void printResult(int numbers[], int length, float result)
{
    string printedString = to_string(numbers[0]);
    for (short int i = 1; i < length; i++)
    {
        printedString += " + " + to_string(numbers[i]);
    }
    cout << printedString << " = " << result << endl;
}

int main()
{
    int length;
    int numbers[100];
    readNumbers(numbers, length);
    printResult(numbers, length, calculateSum(numbers, length));
    return 0;
}