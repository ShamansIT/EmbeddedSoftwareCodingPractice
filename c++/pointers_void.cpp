#include <iostream>

int main() {

    int a = 10;
    double b = 1.2;

    void* p;
    p = &a;
    std::cout << "&a = " << &a << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "*p = " << *(int*)p << std::endl; // to distinguish the pointer, it is necessary to provide a value type
  
    p = &b;

    return 0;
}