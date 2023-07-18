#include <iostream>
#include "Rectangle.h"

void Show(const Rectangle &rectangle);

int main()
{
    Rectangle myRec;

    Show(myRec);

    myRec.SetHeight(20);
    myRec.SetWidth(20);

    Show(myRec);

}

void Show(const Rectangle &rectangle)
{
    std::cout << "Height =  " << rectangle.GetHeight() << "\t"
              << "Width = " << rectangle.GetWidth() << std::endl;
}