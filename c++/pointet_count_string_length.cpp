#include <iostream>

int CountLength(const char * str);

int main() {

    const char STR[] = "Hello World";
    std::cout << CountLength(STR) << std::endl;

    return 0;
}

int CountLength(const char * str){
    int length = 0;
    while (*str++ != '\0')
    {
        length++;
    }
    return length;
}