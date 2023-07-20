#include <cstring>
#include <iostream>
#include "String.h"

String::String()
    :str(nullptr), length(0)
{ }

String::String(const String &other)
    :String()
{
    std::cout << "Constructor copy" << std::endl;
    if (other.length != 0)
    {
        this->length = other.length;
        str  =  new char [length + 1];
        strncpy(this->str, other.str, length + 1);
    }
}

String::String(const char *str)
    : String()
{
    std::cout << "Constructor" << std::endl;
    if (str != nullptr && std::strlen(str) !=0){
        size_t length  = std::strlen(str);
        this->length = length;
        this->str = new char [length + 1];
        strncpy(this->str, str, length+1);
    }
}

String::String(const char *arr, size_t size)
    : String()
{
    if (arr != 0 && size != 0)
    {
        length = size;
        str = new char[length+1];

        for (size_t i = 0; i < length; i++)
            str[i] = arr[i];
        str[length] = '\0';
    }
}

String::~String()
{
    delete [] str;
    str = nullptr;
    length = 0;
}

void String::SetString(const char *str)
{
    if (str != nullptr && std::strlen(str) !=0)
    {
        size_t length = std::strlen(str);
        delete[] this->str;

        this->length = length;
        this->str =  new char[length+1];
        strncpy(this->str, str, length+1);
    }
}

void String::SetString(const String &other) {
    if(other.length != 0){
        delete[] str;

        this->length = other.length;
        str =  new char[length+1];
        strncpy(this->str, other.str, length+1);
    }
}

void String::SetString(const char arr[], size_t size) {
    if (str != nullptr && size != 0)
    {
        delete[] str;

        length = size;
        str = new char[length + 1];

        for (size_t i = 0; i < length; i++)
            str[i] =  arr[i];
        str[length] = '\0';
    }

}

String::String(String &&other) noexcept
{
    std::cout << "Constructor transfer" << std::endl;
    this->str = other.str;
    this->length = other.length;

    other.str = nullptr;
    other.length = 0;
}


