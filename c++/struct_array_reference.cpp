#include <iostream>

struct Pointers
{
    int x;
    int y;
};

int main()
{
    const int SIZE = 3;

    Pointers array[SIZE] =
    {  
        Pointers { 10, 20},
        Pointers { 30, 40},
        Pointers { 50, 60}
    };

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Struct " << i + 1 << ": x = " << array[i].x << ", y = " << array[i].y << std::endl;
    }

    Pointers* ptr[SIZE] =
    {
        &array[0],
        &array[1],
        &array[2]
    };

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Struct &" << i + 1 << ": x = " << ptr[i]->x << ", y = " << ptr[i]->y << std::endl;
    }

    return 0;
}