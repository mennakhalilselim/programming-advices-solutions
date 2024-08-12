#include <iostream>
#include <cstdlib>
#include <vector>
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

void calculateSums(int randMatrix[3][3], int sums[3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += randMatrix[j][i];
        }
        sums[i] = sum;
    }
}

void printSums(int sums[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Sum of column " << i + 1 << " is: " << sums[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int randMatrix[3][3];
    int sums[3];
    generateMatrix(randMatrix);
    printMatrix(randMatrix);
    calculateSums(randMatrix, sums);
    printSums(sums);
    return 0;
}