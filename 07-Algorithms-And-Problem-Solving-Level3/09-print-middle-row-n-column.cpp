#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int generateRandomNumber(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void generateMatrix(int randomMatrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            randomMatrix[i][j] = generateRandomNumber(1, 100);
        }
    }
}
void printMiddleRow(int randomMatrix[3][3])
{
    int middle = 3 / 2;
    for (int j = 0; j < 3; j++)
    {
        cout << setw(3) << randomMatrix[middle][j] << "   ";
    }
    cout << endl;
}

void printMiddleColumn(int randomMatrix[3][3])
{
    int middle = 3 / 2;
    for (int i = 0; i < 3; i++)
    {
        cout << setw(3) << randomMatrix[i][middle] << "   ";
    }
    cout << endl;
}

void printMatrix(int matrix1[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << matrix1[i][j] << "   ";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int randomMatrix[3][3];
    generateMatrix(randomMatrix);
    cout << "randomMatrix: " << endl;
    printMatrix(randomMatrix);

    cout << "middle row: " << endl;
    printMiddleRow(randomMatrix);

    cout << "middle column: " << endl;
    printMiddleColumn(randomMatrix);
    return 0;
}