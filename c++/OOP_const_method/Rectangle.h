#ifndef OOP_CONST_METHOD_RECTANGLE_H
#define OOP_CONST_METHOD_RECTANGLE_H

class Rectangle {
public:
    Rectangle();
    void SetWidth(int newWidth);
    void SetHeight(int newHeight);
    int GetWidth() const { return width; }
    int GetHeight() const { return height; }

private:
    int width = 10;
    int height = 10;
};

#endif //OOP_CONST_METHOD_RECTANGLE_H
