#include <iostream>

int main() {

    int a = 10;
    int b = 5;
    int* p = &a;
    int** pp = &p; // pointer to ponter 

    std::cout << a << std::endl;
    std::cout << &a << std::endl; //address variable
    std::cout << *p << std::endl; // unnaming pointer
    std::cout << p << std::endl; // pointer = address
    std::cout << &p << std::endl; // address pointer 

    p = &b;
    std::cout << &b << std::endl; 
    std::cout << p << std::endl;      
    
    *p = 33;
    std::cout << b << std::endl;

    //pointer to constant
    const int c = 44;
    const int* pc = &c;

    //constant pointer
    int d = 55;
    const int e = 55;   

    int* const pconst = &d;
    *pconst = 66;

    const int* const pconstconst = &e;

    int* n = nullptr;//recomend to init pointer

    return 0;
}