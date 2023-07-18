#include "Rectangle.h"

Rectangle::Rectangle()
{

}

void Rectangle::SetWidth(int newWidth)
{
    if (newWidth > 0)
    {
        width = newWidth;
    }
}

void Rectangle::SetHeight(int newHeight)
{
    if (newHeight > 0)
    {
        height = newHeight;
    }
}