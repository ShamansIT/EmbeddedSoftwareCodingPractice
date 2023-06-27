#include <iostream>

void Func();

void Function(int a, int b);
double FunctionDouble();
void FunctionArr(const int arr[], int size);

int main() {

    void (*p1)() = Func;

    void (*p2)(int, int) = Function;
    double (*p3)() = FunctionDouble;
    void (*p4)(const int [], int) = FunctionArr;

    std::cout << Func << std::endl; //address Function
    std::cout << &Func << std::endl; //address Function   

    std::cout << p1 << " = "<< Func << std::endl; //pointer = address Function 
    std::cout << *p1 << " = "<< Func << std::endl; // *pointer = address Function 

    Func();
    p1();// also call function Func
    (*p1)();

    
    return 0;
}

void Func(){
    std::cout << "Call Func" << std::endl;
}

void Function(int a, int b){}
double FunctionDouble(){ return 2.2; }
void FunctionArr(const int arr[], int size){}

