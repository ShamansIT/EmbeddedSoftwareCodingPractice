#include <iostream>
#include <cstring>

int main() {
    const int SIZE = 100;
    char buffer [SIZE];

    std::cin.getline(buffer,SIZE);

    int length = strlen(buffer);

    char *str = new char [length + 1];

    std::cout << "Enter string length is " << length << std::endl;

    delete str;

    return 0; 
}