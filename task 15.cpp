#include <iostream>

void printMatrixT15(int **matrix, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void paskalTriangle(int **matrix, int rows)
{
    matrix[0][0] = 1;
    for (int i = 1; i < rows; i++) {
        matrix[i][0] = 1;
        matrix[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
        }
    }
    printMatrixT15(matrix, rows);
}

int main() {

    int rows;
    std::cout << "Enter the amount of rows in your matrix: ";
    std::cin >> rows;

    int** matrix= new int*[rows];
    for (size_t i = 0; i < rows; i++) {
        matrix[i] = new int[i + 1];
    }
    paskalTriangle(matrix, rows);
    return 0;
}
