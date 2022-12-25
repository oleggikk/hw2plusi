#include <iostream>

template <typename T>
void fillArray(int n, T* arr) {

    unsigned seed = time(nullptr);
    srand(seed);
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 200 - 100 + rand() % 10 * 0.1;
    }
}

template <typename T>
void printArray(int n, T* arr) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

template <typename T>
void swap(T *a, T *b) {
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    // task 6
    int elements = 14, count = 0;
    auto *arr = new double[elements];

    fillArray(elements, arr);
    printArray(elements, arr);

    double *p1 = arr;
    double *p2 = arr + 7;

    for (int i = 0; i < 7; ++i) {
        swap(p1, p2);
        p1++; p2++; count++;
    }

    printArray(elements, arr);
    std::cout << "Permutations = " << count << std::endl;
    delete[] arr;
    return 0;
}
