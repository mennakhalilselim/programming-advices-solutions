#include <iostream>
#include <iomanip>
using namespace std;

int generateRandomNumber(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void generateMatrix(int matrix1[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix1[i][j] = generateRandomNumber(1, 100);
        }
    }
}

void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
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
    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];
    generateMatrix(matrix1);
    generateMatrix(matrix2);
    cout << "matrix1: " << endl;
    printMatrix(matrix1);
    cout << "matrix2: " << endl;
    printMatrix(matrix2);

    cout << "matrix1 * matrix2: " << endl;
    multiplyMatrices(matrix1, matrix2, result);
    printMatrix(result);
    return 0;
}