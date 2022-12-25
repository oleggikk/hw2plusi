#include <iostream>
void task4(float *array,int sizeOfArray) {

    int count = 0; 
    for (int j = 0; j < sizeOfArray - 1; j++) {     //default bubblesort for the array

        for (int i = 0; i < sizeOfArray - 1; i++) {

            if (array[i] < array[i + 1]) {
                count++;
                std::swap(array[i], array[i + 1]);
            }
            
        }
    }
    std::cout << "The number of permutations: " << count << std:: endl;
}


int main() {
    int sizeOfArray;

    int sizeOfArray = 12; 

    float* array = new float[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        std:: cin >> array[i];
    }
    task4(array, sizeOfArray);
}