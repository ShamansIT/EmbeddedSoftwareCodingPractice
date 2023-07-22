#include <iostream>
#include "String.h"

int main()
{
    String emptyString;

    std::cout << "\nEmpty string: \n";
    std::cout << "str = [" << emptyString.GetString() << "]\n";
    std::cout << "size = " << emptyString.GetSize() << "\n";

    String someString{ "I am unique" };

    std::cout << "\nSome string: \n";
    std::cout << "str = [" << someString.GetString() << "]\n";
    std::cout << "size = " << someString.GetSize() << "\n";

    someString.SetString("I am not unique anymore :(");
    
    std::cout << "\nSome string (again): \n";
    std::cout << "str = [" << someString.GetString() << "]\n";
    std::cout << "size = " << someString.GetSize() << "\n";

    String compare1{"abcd"};
    String compare2{"abc"};

    const String& biggerString = compare1.CompareBySize(compare2);
   
    std::cout << "\nBigger string: \n";
    std::cout << "str = [" << biggerString.GetString() << "]\n";
    std::cout << "size = " << biggerString.GetSize() << "\n";
}