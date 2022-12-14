#include <iostream>

void printArray(int arr[], int size_of_array)
{
    for (int i = 0; i < size_of_array; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int* insertionSortFromMinToMax(int arr[], int size_of_array) {
    int key;
    int j;
    for (int i = 1; i < size_of_array; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}

int* insertionSortFromMaxToMin(int arr[], int size_of_array) {
    int key;
    int j;
    for (int i = 1; i < size_of_array; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}

int main() {

    int num1;
    std::cout << "Enter length of array: ";
    std::cin >> num1;
    int *array_neg = new int[num1];
    int *array_pos = new int[num1];

    int negative_count = 0;
    int positive_count = 0;
    int temp = 0;
    std::cout << "Enter " << num1 << " values for array" << std::endl;
    for (int i = 0; i < num1; i++)
    {
        std::cin >> temp;
        if (temp >= 0)
        {
            array_pos[positive_count] = temp;
            positive_count += 1;
        }
        else
        {
            array_neg[negative_count] = temp;
            negative_count += 1;
        }
    }

    insertionSortFromMinToMax(array_neg, negative_count);
    insertionSortFromMaxToMin(array_pos, positive_count);

    for (int i = negative_count; i < num1; i++)
    {
        array_neg[i] = array_pos[i - negative_count];
    }
    printArray(array_neg, num1);

    return 0;
}
