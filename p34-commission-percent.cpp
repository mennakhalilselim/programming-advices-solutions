#include <iostream>
using namespace std;

float readTotalSales()
{
    int totalSales;
    cout << "Please enter total sales: ";
    cin >> totalSales;
    return totalSales;
}

float calculateCommission(float totalSales)
{
    int commission = 0;
    if (totalSales >= 1000000)
    {
        commission = 0.01 * totalSales;
    }
    else if (totalSales >= 500000)
    {
        commission = 0.02 * totalSales;
    }
    else if (totalSales >= 100000)
    {
        commission = 0.03 * totalSales;
    }
    else if (totalSales >= 50000)
    {
        commission = 0.05 * totalSales;
    }
    return commission;
}

void printCommission(float commission)
{
    cout << "The total comission is: " << commission << endl;
}

int main()
{
    printCommission(calculateCommission(readTotalSales()));
    return 0;
}