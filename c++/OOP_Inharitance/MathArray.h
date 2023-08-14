#ifndef OOP_INHARITANCE_MATHARRAY_H
#define OOP_INHARITANCE_MATHARRAY_H

#include "Array.h"

class MathArray : public Array
{
public:
    int Sum() const;
    int Product() const;
    int Max() const;
    int Min() const;
    double Average() const;
};

#endif
