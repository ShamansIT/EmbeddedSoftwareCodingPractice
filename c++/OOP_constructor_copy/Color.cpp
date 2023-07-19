#include <iostream>
#include "Color.h"

Color::Color(Color::byte red, Color::byte green, Color::byte blue)
    : red(red), green(green), blue(blue){
    std::cout << "Color constructor\n";
}

void Color::ShowRGB() const {
    std::cout << "[ R = " << static_cast<int>(red)
              << " G = " << static_cast<int>(green)
              << " B = " << static_cast<int>(blue) << "]";
}

Color::~Color() {
    std::cout << "Color destructor\n";
}
