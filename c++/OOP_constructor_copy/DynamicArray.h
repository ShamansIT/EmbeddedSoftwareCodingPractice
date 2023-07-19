#ifndef OOP_CONSTRUCTOR_COPY_DYNAMICARRAY_H
#define OOP_CONSTRUCTOR_COPY_DYNAMICARRAY_H
#include <cstring>

class DynamicArray {
private:
    int* arr = nullptr;
    size_t size = 0;

public:
    DynamicArray(size_t size);
    DynamicArray(const DynamicArray& other);

    ~DynamicArray();

    size_t GetSize() const { return size;}
    int GetElement(size_t index);
    void SetElement (size_t index, int value);
};
#endif