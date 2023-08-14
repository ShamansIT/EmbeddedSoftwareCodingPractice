#include "MathArray.h"

int MathArray::Sum() const
{
    if (Size() == 0)
    {
        return 0;
    }

    int sum = 0;

    for (int i = 0; i < Size(); i++) {
        sum += (*this)[i];
    }

    return sum;
}

int MathArray::Product() const {
    if (Size() == 0)
    {
        return 0;
    }

    int product = 1;

    for (int i = 0; i < Size(); i++) {
        product *= (*this)[i];
    }

    return product;
}

int MathArray::Max() const
{
    int max = (*this)[0];

    for (int i = 1; i < Size(); i++)
    {
        if (max < (*this)[i])
        {
            max = (*this)[i];
        }
    }

    return max;
}

int MathArray::Min() const {
    int min = (*this)[0];

    for (int i = 1; i < Size(); i++)
    {
        if (min > (*this)[i])
        {
            min = (*this)[i];
        }
    }

    return min;
}

double MathArray::Average() const
{
    if (Size() == 0)
    {
        return 0;
    }

    double sum = Sum();

    return sum / Size();
}
