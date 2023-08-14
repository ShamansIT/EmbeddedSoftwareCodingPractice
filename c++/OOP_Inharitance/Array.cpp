#include "Array.h"
#include <iostream>

Array::Array(int size)
    : size(0), arr(nullptr)
{
    if (size > 0)
    {
        this->size = size;
        arr = new int [size] {};
    }
}

Array::Array(const Array &other)
    : size(other.size), arr(nullptr)
{
    if (other.size > 0)
    {
        this->arr = new int[other.size];

        for (int i = 0; i < size; i++) {
            this->arr[i] = other.arr[i];
        }
    }
}

Array::~Array()
{
    delete [] arr;
    arr = nullptr;
}

Array Array::operator=(const Array &other)
{
    if(this != &other)
    {
        this->~Array();

        this->size = other.size;

        if(other.size >0)
        {
            this-> arr =  new int[other.size];

            for (int i =0; i < size; i++)
            {
                this->arr[i] = other.arr[i];
            }
        }
    }
    return *this;
}


int &Array::operator[](int index)
{
    if(index < size)
    {
        return arr[index];
    }
    std::exit(1);
}

const int &Array::operator[](int index) const
{
    if(index < size)
    {
        return arr[index];
    }
    std::exit(1);
}

Array::Array()
    : size(0), arr(nullptr)
{ }
