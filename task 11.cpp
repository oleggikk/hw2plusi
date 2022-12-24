#include <iostream>

void printMatrix(int **matrix, int rows, int strings)
{
    for (int i = 0; i < strings; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            std::cout << matrix[j][i] << " ";
        }
        std::cout << std::endl;
    }
}

void editMatrix(int **matrix, int rows, int strings)
{
    int last_elem;
    for (int i = 0; i < strings; i++) {
        last_elem = matrix[rows - 1][i];
        for (int j = rows - 1; j >= 0; j--) {
            if (j != 0) {
                matrix[j][i] = matrix[j - 1][i];
            }
            else
            {
                matrix[j][i] = last_elem;
            }
        }
    }
    printMatrix(matrix, rows, strings);
}


int main() {

    int rows;
    std::cout << "Enter the amount of rows in your matrix: ";
    std::cin >> rows;

    int strings;
    std::cout << "Enter the amount of strings in your matrix: ";
    std::cin >> strings;

    int** matrix= new int*[rows];
    for (size_t i = 0; i < rows; ++i) {
        matrix[i] = new int[strings];
    }
    for (int i = 0; i < rows; i++)
    {
        std::cout << "Enter elements of " << i+1 << " row: " << std::endl;
        for (int j = 0; j < strings; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
    std::cout << "Your matrix: " << std::endl;
    printMatrix(matrix, rows, strings);
    std::cout << "Your edited matrix: " << std::endl;
    editMatrix(matrix, rows, strings);

    return 0;
}
