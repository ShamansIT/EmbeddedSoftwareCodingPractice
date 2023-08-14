#ifndef OOP_INHARITANCE_ARRAY_H
#define OOP_INHARITANCE_ARRAY_H

class Array {
private:
    int* arr;
    int size;

public:
    Array();
    Array(int size);
    Array(const Array& other);
    ~Array();

    Array operator=(const Array& other);
    int& operator[](int index);
    const int& operator[](int index) const;

    int Size() const {return size;}
};

#endif
