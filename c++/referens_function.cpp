#include <iostream>

int& Min(int arr[], int size){
    int min =  arr[0];
    int minIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            minIndex = i;
        }
    }
    
    return arr[minIndex];
}

int main() {

    int size = 3;
    int arr[size] = { 1 ,2, 3 };

    Min(arr,size) = 50; // init value by reference

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    
    std::cout << std::endl;

    return 0; 
}