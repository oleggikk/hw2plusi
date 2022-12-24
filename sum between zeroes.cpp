#include <iostream>

int sumBetweenZeroes(int *arr, int sizeOfArray)
{
    int sum = 0;
    int counter = 0;

    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] == 0)  // checking if we're between two zeroes
        {
            counter += 1;
        }

        if (counter == 1)
        {
            sum += arr[i];
        }

    }

    return sum;
}


int main()
{
    //TASK 8. We'll use a customized rather than a hardcoded matrix

    int** array;
    int rows, columns, i, j;

    std::cout << "Enter the number of rows" << std::endl;
    std::cin >> rows;
    std::cout << "Enter the number of columns" << std::endl;
    std::cin >> columns;

    //Dynamically allocating rows space in heap
    array = new int*[rows];
    //Dynamically allocating column space in heap
    for(i = 0; i < rows; i++){
        array[i] = new int[columns];
    }

    //Taking input in the array
    std::cout << "Enter " << (rows * columns) << " numbers \n";
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            std::cout << "Enter element at "<< i+1 << " rows " << j+1 << " column: "<< std::endl;
            std::cin >> array[i][j];
        }
    }

    //Sending to the function each row of the 2D array as a 1D array to calculate the needed parameter:
    for (i = 0; i < rows; i++)
    {
        std::cout<<"The sum of integers between the zeroes in the"<<i+1<<"th row is: "<<sumBetweenZeroes(array[i], columns);
        std::cout<<"\n";
    }

    //Free space after the use of array
    delete [] array;

    return 0;
}