#include <iostream>
#include <cstring>
#include "String.h"

char ConvertDigitToChar(int digit);
String CreateStringWithNumbers(const int arr[], size_t size);

int main() {
    String str1 {"Some interesting text"};
    String str2 { str1 };
    String str3;

    const char* C_STR  = "Some C-interesting text";
    String str4 {C_STR};

    const size_t SIZE = 3;
    char someLetter[SIZE] = { 'A', 'B', 'C'};
    String str5 {someLetter, SIZE};

    std::cout << "str1 = [" << str1.GetString() << "]\n";
    std::cout << "str2 = [" << str2.GetString() << "]\n";
    std::cout << "str3 = [" << str3.GetString() << "]\n";
    std::cout << "str4 = [" << str4.GetString() << "]\n";
    std::cout << "str5 = [" << str5.GetString() << "]\n";

    std::cout << std::endl;

    std::cout << "str1 length = " << str1.GetLength() << std::endl;
    std::cout << "str2 length = " << str2.GetLength() << std::endl;
    std::cout << "str3 length = " << str3.GetLength() << std::endl;
    std::cout << "str4 length = " << str4.GetLength() << std::endl;
    std::cout << "str5 length = " << str5.GetLength() << std::endl;

    std::cout << std::endl;

    std::cout << "Is str1 empty?" << (str1.IsEmpty() ? "Yes" : "No") <<std::endl;
    std::cout << "Is str2 empty?" << (str2.IsEmpty() ? "Yes" : "No") <<std::endl;
    std::cout << "Is str3 empty?" << (str3.IsEmpty() ? "Yes" : "No") <<std::endl;
    std::cout << "Is str4 empty?" << (str4.IsEmpty() ? "Yes" : "No") <<std::endl;
    std::cout << "Is str5 empty?" << (str5.IsEmpty() ? "Yes" : "No") <<std::endl;

    std::cout << std::endl;

    str3.SetString(C_STR);
    std::cout << "str3 = [" << str3.GetString() << "]\n";
    str3.SetString(someLetter, SIZE);
    std::cout << "str3 = [" << str3.GetString() << "]\n";
    str3.SetString(str1);
    std::cout << "str3 = [" << str3.GetString() << "]\n";

    std::cout << std::endl;

    int arr[SIZE] = {4, 6, 9};
    String str6 { CreateStringWithNumbers(arr, SIZE)};
    std::cout << "str6 = [" << str6.GetString() << "]\n";

    return 0;
}

char ConvertDigitToChar(int digit){
    return digit >=0 && digit <=9 ? digit + '0' : '!';
}

String CreateStringWithNumbers(const int arr[], size_t size){
    if(arr != nullptr || size == 0)
        return String();

    char* str = new char[size+1];

    for (size_t i = 0; i < size; i++) {
        str[i] = ConvertDigitToChar(arr[i]);
    }

    str[size] = '\0';
    String object {str};

    delete [] str;

    return object;
}
