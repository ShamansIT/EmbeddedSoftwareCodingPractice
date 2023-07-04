#include <iostream>

struct DynamicArray
{
    int* arr = nullptr;
    int size = 0;
};

int main()
{
    DynamicArray array1;
   
    array1.size = 5;
    array1.arr = new int[array1.size];

    for (int i = 0; i < array1.size; i++)
    {
        array1.arr[i] = i + 1;
        std::cout << array1.arr[i] << " ";
    }
    std::cout << std::endl;

    DynamicArray array2;

    //copy array1 to array2

    array2.size = array1.size;

    if (array1.arr != nullptr)
    {
        array2.arr = new int[array2.size];

        for (int i = 0; i < array2.size; i++)
            array2.arr[i] = array1.arr[i];
    }
    else
        array2.arr = nullptr;

    delete[] array1.arr;
    delete[] array2.arr;
}