#include <cstdlib>
#include <iostream>
#include "DynamicArray.h"

DynamicArray::DynamicArray(size_t size) {

    if (size != 0)
    {
        this->size = size;
        arr = new int[size];

        for (size_t i = 0; i < size; i++)
            arr[i] = std::rand() % 100;
    }
    std::cout << "DynamicArray constructor\n";
}

DynamicArray::~DynamicArray() {
    delete[] arr;
    arr = nullptr;
    size = 0;
    std::cout << "DynamicArray destructor\n";
}

int DynamicArray::GetElement(size_t index) {
    if(index >= size){
        std::cout << "Incorrect index.\n";
        std::exit(EXIT_FAILURE);
    }
    return arr[index];
}

void DynamicArray::SetElement(size_t index, int value) {
    if(index >= size){
        std::cout << "Incorrect index.\n";
        std::exit(EXIT_FAILURE);
    }
    arr[index] = value;
}

DynamicArray::DynamicArray(const DynamicArray &other)
    :size(other.size)
{
    if (size != 0)
    {
        arr = new int[size];
        for (size_t i = 0; i < size; i++)
            arr[i] = other.arr[i];
    }
    std::cout << "DynamicArray copy constructor\n";
}
