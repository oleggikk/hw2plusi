#include <iostream>

int main()
{
    //TASK 14

    //creating a customized array of prices
    int sizeOfArray;
    std::cout<<"Enter the length of your array: "<<std::endl;
    std::cin>>sizeOfArray;

    int *arr = new int[sizeOfArray];  //allocating memory for an array

    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout<<"Enter the price of the stock: ";

        int element;
        std::cin>>element;
        arr[i] = element;   //filling the created array with stock prices
    }

    // printing out the initial array:
    std::cout<<"The initial array of stock prices is: "<<std::endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout<<arr[i]<<" ";
    }

    std::cout<<std::endl;

    int maximum = 0;  //maximum profit

    for(int i = 0; i < sizeOfArray - 1; i++)
    {
        for (int j = i + 1; j < sizeOfArray; j++)
        {
            if(arr[j] - arr[i] > maximum)
            {
                maximum = arr[j] - arr[i];
            }
        }
    }
    
    delete[] arr; //freeing the allocated space

    std::cout<<"The maximum profit you can achieve through this transaction is: "<< maximum;

    return 0;
}
