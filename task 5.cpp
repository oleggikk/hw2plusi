#include <iostream>

void printArray(int arr[], int size_of_array)
{
    for (int i = 0; i < size_of_array; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void arrayChanger(int arr[], int size_of_array)
{
    int result_arr[size_of_array];
    for (int i = 0; i < size_of_array; i++)
    {
        result_arr[i] = NULL;
    }
    int count = 0;
    int temp1;
    int temp2;
    for (int i = 0; i < size_of_array; i++)
    {
        if (arr[i] < 0)
        {
            result_arr[i - count] = arr[i];
        }
        else
        {
            count += 1;
            bool check = true;
            temp2 = result_arr[size_of_array - 1];
            for (int j = size_of_array - 1; j > i - count; j--)
            {
                if (check and (result_arr[j-1] >= 0 or result_arr[j-1] == NULL)) {
                    temp1 = result_arr[j - 1];
                    result_arr[j - 1] = temp2;
                    check = false;
                }
                else if(!check and (result_arr[j-1] >= 0 or result_arr[j-1] == NULL))
                {
                    temp2 = result_arr[j - 1];
                    result_arr[j - 1] = temp1;
                    check = true;
                }

            }
            result_arr[size_of_array-1] = arr[i];
        }
    }
    printArray(result_arr, size_of_array);


}

int main() {


    int num1;
    std::cout << "Enter length of array: ";
    std::cin >> num1; 
    int *array1 = new int[num1];
    std::cout << "Enter " << num1 << " values for array" << std::endl;
    for (int i = 0; i < num1; i++)
    {
        std::cin >> array1[i];
    }
    std::cout << "Your array" << std::endl;
    printArray(array1, num1);
    arrayChanger(array1, num1);


    int num2;
    std::cout << "Enter length of array: ";
    std::cin >> num2;
    int *array2 = new int[num2];
    std::cout << "Enter " << num2 << " values for array" << std::endl;
    for (int i = 0; i < num2; i++)
    {
        std::cin >> array2[i];
    }
    std::cout << "Your array" << std::endl;
    printArray(array2, num2);
    arrayChanger(array2, num2);


    int num3;
    std::cout << "Enter length of array: ";
    std::cin >> num3;
    int *array3 = new int[num3];
    std::cout << "Enter " << num3 << " values for array" << std::endl;
    for (int i = 0; i < num3; i++)
    {
        std::cin >> array3[i];
    }
    std::cout << "Your array" << std::endl;
    printArray(array3, num3);
    arrayChanger(array3, num3);

    return 0;
}
