#include <iostream>
#include <stdlib.h>
using namespace std;

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int row1, int col1, int col2)
{
    for (int i = 0; i < row1; ++i)
    {
        for (int j = 0; j < col2; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < col1; ++k)
            {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][10], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    system("cls");

    cout << "Hello world" << endl;

    int firstMatrix[10][10] = {
        {1, 2, 3},
        {4, 5, 6}};
    int secondMatrix[10][10] = {
        {7, 8},
        {9, 10},
        {11, 12}};
    int result[10][10];
    int row1 = 2, col1 = 3, row2 = 3, col2 = 2;

    multiplyMatrices(firstMatrix, secondMatrix, result, row1, col1, col2);

    cout << "Resultant Matrix:\n";
    displayMatrix(result, row1, col2);

    return 0;
}
