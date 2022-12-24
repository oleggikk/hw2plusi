#include <iostream>

void printArray(int arr[], int size_of_array)
{
    for (int i = 0; i < size_of_array; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void connectArrays(int *num1, int *num2, int m, int n)
{
    int i = n + m - 1;
    int j = m - 1;
    int k = n - 1;
    while(j >= 0 || k >= 0) {
        if (j >= 0 && (k < 0 || num1[j] >= num2[k])) {
            num1[i--] = num1[j--];
        }
        if (k >= 0 && (j < 0 || num1[j] < num2[k])) {
            num1[i--] = num2[k--];
        }
    }
    printArray(num1, n+m);
}

int main() {

    int m;
    int n;
    std::cout << "Enter m: " << std::endl;
    std::cin >> m;
    std::cout << "Enter n: " << std::endl;
    std::cin >> n;

    int* num1 = new int[m+n];
    int* num2 = new int[n];

    std::cout << "Enter elements of num1: " << std::endl;
    for (int i = 0; i < m; i++)
    {
        std::cin >> num1[i];
    }
    for (int i = m; i < m + n; i++)
    {
        num1[i] = 0;
    }
    std::cout << "Enter elements of num2: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> num2[i];
    }
    connectArrays(num1, num2, m, n);
    return 0;
}
