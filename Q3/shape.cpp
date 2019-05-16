#include"shape.h"

CShape::CShape(const int &dimensionSize_) : dimensionSize{dimensionSize_}
{
}

CShape::~CShape()
{
}

std::ostream &operator<<(std::ostream &out, const Shape &shape)
{
    shape.print(out);
    return out;
}