#include <iostream>

void Change(int* a, int* b ){
    *a = 55;
    b = 0; //dont change variable, because its add null to pointer
    //b = 66 error
}

int main() {

    int a = 10, b = 20;

    std::cout << "a = " << a << ", b = " << b <<  std::endl;
    
    Change(&a, &b);

    std::cout << "a = " << a << ", b = " << b <<  std::endl;
    
    return 0;
}