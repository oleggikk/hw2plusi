#include<iostream>;

void task10(float *array1, float *array2, int sizeOfArray) {
    
    for (int j = 0; j < sizeOfArray - 1; j++) {     //default bubblesort for the first array

        for (int i = 0; i < sizeOfArray - 1; i++) {

            if (array1[i] < array1[i + 1]) {
                std::swap(array1[i], array1[i + 1]); 
            }
        }
    }

    std::cout << "First array: ";

    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << array1[i] << " ";          //first array output
    }

    std::cout << "\n" << "=================================" << std::endl;

    for (int j = 0; j < sizeOfArray - 1; j++) {     //default bubblesort for the second array

        for (int i = 0; i < sizeOfArray - 1; i++) {

            if (array2[i] < array2[i + 1]) {
                std::swap(array2[i], array2[i + 1]); 
            }
        }
    }

    std::cout << "Second array: ";

    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << array2[i] << " ";          //second array output
    }

    std::cout << "\n" << "\n" << "\n" << "=================================" << std::endl;

    std::cout << "First array MAX: " << array1[0] << std::endl;
    std::cout << "Second array MAX: " << array2[0] << std::endl;
    
    float *pArrFirstMAX = &array1[0];
    float *pArrSecondMAX = &array2[0];
    float temp = *pArrFirstMAX;
    *pArrFirstMAX = *pArrSecondMAX;
    *pArrSecondMAX = temp;

    std::cout << "=================================" << std::endl;
    std::cout << "\n" << "=================================" << std::endl;

    std::cout << "First changed array: ";

    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << array1[i] << " ";          //changed array output
    }

    std::cout << "\n" << "=================================" << std::endl;

    std::cout << "Second changed array: ";

    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << array2[i] << " ";          
    }
}




int main()
{
    int sizeOfArray;
    
    std::cout << "Size of array ";

    std:: cin >> sizeOfArray;

    float *array1 = new float[sizeOfArray];

    float *array2 = new float[sizeOfArray];

    std::cout << "First array ";

    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cin >> array1[i];
    }
    std::cout << "Second array ";

    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cin >> array2[i];
    }

    task10(array1, array2, sizeOfArray);
   
    return 0;

}


