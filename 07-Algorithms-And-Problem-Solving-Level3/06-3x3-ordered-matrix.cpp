#include <iostream>
#include <iomanip>
using namespace std;

void generateOrderedMatrix(int orderedMatrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            orderedMatrix[i][j] = i * 3 + j + 1;
        }
    }
}

void printMatrix(int orderedMatrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << orderedMatrix[i][j] << "   ";
        }
        cout << endl;
    }
}

int main()
{
    int orderedMatrix[3][3];
    generateOrderedMatrix(orderedMatrix);
    printMatrix(orderedMatrix);
    return 0;
}