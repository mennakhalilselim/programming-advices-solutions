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

void transposeMatrix(int orderedMatrix[3][3], int transposedMatrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposedMatrix[j][i] = orderedMatrix[i][j];
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
    int transposedMatrix[3][3];
    generateOrderedMatrix(orderedMatrix);
    transposeMatrix(orderedMatrix, transposedMatrix);
    cout << "Orderd Matrix: " << endl;
    printMatrix(orderedMatrix);
    cout << "Transposed Matrix: " << endl;
    printMatrix(transposedMatrix);
    return 0;
}