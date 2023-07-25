#ifndef OOP_TEMPLATE_CLASS_ARRAY_H
#define OOP_TEMPLATE_CLASS_ARRAY_H
#include <iostream>

template<typename T>
class Array {
private:
    T* arr;
    int size;

public:
    Array(int size);
    Array(const Array& other);
    Array(Array&& other);
    ~Array();
    int Size() const {return size;}

    void Show() const;

    Array operator=(const Array& other)
    {
        if (this != &other)
        {
            delete [] arr;

            size = other.size;
            arr = new T[other.size];

            for (int i = 0; i < size; ++i) {
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }

    Array operator=(Array&& other)
    {
        if (this != &other)
        {
            delete [] arr;

            size = other.size;
            arr = other.arr;
        }
        return *this;
    }
};

template<typename T>
Array<T>::Array(int size)
        : size(size), arr(new T [size])
{
    for (int i = 0; i < size; i++) {
        arr[i] = rand()% 100;
    }
}

template<typename T>
Array<T>::Array(const Array& other)
        : size(other.size), arr(new T [other.size])
{
    for (int i = 0; i < size; i++) {
        arr[i] = other.arr[i];
    }
}

template<typename T>
Array<T>::Array(Array&& other)
: size(other.size), arr(other.arr)
{
other.size = 0;
other.arr = nullptr;
}

template<typename T>
Array<T>::~Array()
{
    delete [] arr;
    arr = nullptr;
    size = 0;
}

template<typename T>
void Array<T>::Show() const
{
    if (size == 0)
    {
        std::cout << "empty\n";
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
}

//specify template
template<>
void Array<double>::Show() const
{
    if (size == 0)
    {
        std::cout << "empty\n";
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << "[" << arr[i] << "] ";
        }
        std::cout << std::endl;
    }
}

#endif