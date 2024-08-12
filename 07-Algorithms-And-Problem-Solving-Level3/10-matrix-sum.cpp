#include <iostream>
#include <iomanip>
using namespace std;

int generateRandomNumber(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void generateMatrix(int randMatrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            randMatrix[i][j] = generateRandomNumber(1, 100);
        }
    }
}

int matrixSum(int randMatrix[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += randMatrix[i][j];
        }
    }
    return sum;
}

void printMatrix(int randMatrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(3) << randMatrix[i][j] << "   ";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int randMatrix[3][3];
    generateMatrix(randMatrix);
    printMatrix(randMatrix);

    cout << "Matrix sum: " << matrixSum(randMatrix) << endl;
    return 0;
}