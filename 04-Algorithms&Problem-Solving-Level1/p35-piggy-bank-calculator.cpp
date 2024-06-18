#include <iostream>
using namespace std;

struct Money
{
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int dollars;
};

Money readNumbers()
{
    Money money;
    cout << "Enter pennies: ";
    cin >> money.pennies;
    cout << "Enter nickels: ";
    cin >> money.nickels;
    cout << "Enter dimes: ";
    cin >> money.dimes;
    cout << "Enter quarters: ";
    cin >> money.quarters;
    cout << "Enter dollars: ";
    cin >> money.dollars;
    return money;
}

int calculateTotalPennies(Money money)
{
    int totalPennies = money.pennies + money.nickels * 5 + money.dimes * 10 + money.quarters * 25 + money.dollars * 100;
    return totalPennies;
}

float calculateTotalDollars(int totalPennies)
{
    float totalDollars = (float)totalPennies / 100;
    return totalDollars;
}

void printResult(int totalPennies, float totalDollars)
{
    cout << "Total Pennies: " << totalPennies << endl;
    cout << "Total Dollars: " << totalDollars << endl;
}

int main()
{
    int totalsPennies = calculateTotalPennies(readNumbers());
    float totalDollars = calculateTotalDollars(totalsPennies);
    printResult(totalsPennies, totalDollars);
    return 0;
}