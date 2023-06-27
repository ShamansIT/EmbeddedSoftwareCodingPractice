#include <iostream>

int main() {

    const int SIZE = 5;
    int arr[SIZE] = {1, 2 ,3 ,4, 5};

    int* p = arr;

    std::cout << arr[0] << std::endl;
    std::cout << &arr[0] << std::endl;
    std::cout << arr << std::endl;

    //same address
    std::cout << p << std::endl;
    std::cout << arr << std::endl; 
    std::cout << &arr << std::endl;
    std::cout << &arr[0] << std::endl;

    std::cout << *p << std::endl;
    std::cout << arr[0] << std::endl; 

    std::cout << p[0] << std::endl;
    std::cout << p[1] << std::endl; 

    return 0;
}