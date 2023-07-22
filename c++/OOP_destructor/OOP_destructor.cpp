#include <iostream>
#include "DynamicNumber.h"
#include "Test.h"

void Function() {
    Test a;
}

int main()
{
    DynamicNumber number{ 5 };

    std::cout << number.GetValue() << "\n";
    number.SetValue(10);
    std::cout << number.GetValue() << "\n";
    number.SetValue(3);
    std::cout << number.GetValue() << "\n";

    //Test
    Function();

    Test* ptr = new Test();
    delete ptr;//call destructor
}

