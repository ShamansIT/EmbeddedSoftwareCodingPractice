#include <iostream>
#include <ctime>
#include "Array.h"
#include "Pair.h"

int main()
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    Array<int> arr1{5};
    arr1.Show();

    Array<double> arr2{10};
    arr2.Show();

    Array<char> arr3{20};
    arr3.Show();

    std::cout << "\nTemplates with two parameters\n";

    Pair<int, double> myObject {10, 22.2};

    std::cout << "Object1 Pair: " << myObject.GetObject1() << std::endl;
    std::cout << "Object2 Pair: " << myObject.GetObject2() << std::endl;
    return 0;
}
