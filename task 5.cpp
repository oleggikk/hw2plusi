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
    int array1[10] = {-6, 5, -2, 4, 8, 10, -11, 12, -3, 16};
    int size_of_array1 = sizeof(array1) / sizeof(array1[0]);
    arrayChanger(array1, size_of_array1);

    int array2[15] = {-7, -5, -2, 4, 8, 10, -45, 122, -3, -16, 24, -24, -5, -8, 11};
    int size_of_array2 = sizeof(array2) / sizeof(array2[0]);
    arrayChanger(array2, size_of_array2);

    int array3[20] = {5, -5, -2, -2, 8, -8, 55, 122, -122, 24, 25, -24, -25, -34, -311, -316, 432, 42, -22, -76};
    int size_of_array3 = sizeof(array3) / sizeof(array3[0]);
    arrayChanger(array3, size_of_array3);



    return 0;
}
