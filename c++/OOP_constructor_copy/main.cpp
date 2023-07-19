#include <iostream>
#include <ctime>
#include "Color.h"
#include "DynamicArray.h"

void Show(Color color);
void Show(DynamicArray dynamicArray);
void Initialize(DynamicArray dynamicArray);

int main() {
    std::srand(static_cast<unsigned> (std::time(nullptr)));
    
    Color black;
    Color white {255, 255, 255};

    Show(black);
    Show(white);

    DynamicArray dynamicArray{3};
    Show( dynamicArray);
    Initialize(dynamicArray);
    Show(dynamicArray);
    
    return 0;
}

void Show(Color color){
    std::cout << "Color RGB:";
    color.ShowRGB();
    std::cout << std::endl;
}

void Show(DynamicArray dynamicArray){
    for (size_t i = 0; i < dynamicArray.GetSize() ; i++)
        std::cout << dynamicArray.GetElement(i) << " ";
    std::cout << std::endl;
}

void Initialize(DynamicArray dynamicArray){
    for (size_t i = 0; i < dynamicArray.GetSize() ; i++)
        dynamicArray.SetElement(i, std::rand() %100);
}