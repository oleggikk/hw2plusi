#include <iostream>

template <typename T>
void fillArrayKB(int n, T* arr) {
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
}

template <typename T>
void fillMatrix(int n, int m, T **matrix) {
    for (int i = 0; i < n; ++i) {
        matrix[i] = new T[m];
        fillArrayKB(m, matrix[i]);
    }
}

template <typename T>
void printMatrix(int n, int m, T **matrix) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

template <typename T>
int sum(int n, T *arr) {
    int sum = 0;
    for (int i = 0; i < n; ++i) sum += arr[i];
    return sum;
}

template <typename T>
void findMinMax(int n, int m, T **matrix) {
    int sumMin, sumMax, indMin = 0, indMax = 0;
    sumMin = sum(m, matrix[0]);
    sumMax = sumMin;
    for (int i = 1; i < n; ++i) {
        int curSum = sum(m, matrix[i]);
        if (curSum > sumMax) {
            sumMax = curSum;
            indMax = i;
        } else if (curSum < sumMin) {
            sumMin = curSum;
            indMin = i;
        }
    }
    std::cout << "Minimum sum = " << sumMin << " on row " << indMin << std::endl;
    std::cout << "Maximum sum = " << sumMax << " on row " << indMax << std::endl;
}

int main() {

    // task 12
    int n = 5, m = 5;
    int **matrix = new int*[n];
    fillMatrix(n, m, matrix);
    printMatrix(n, m, matrix);

    findMinMax(n, m, matrix);

    for (int i = 0; i < n; ++i) delete[] matrix[i];
    delete[] matrix;

    return 0;
}
