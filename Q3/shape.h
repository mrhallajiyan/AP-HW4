#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include"point.h"

class Shape
{
protected:
  int dimensionSize;

public:
  Shape(const int &dimensionSize_ = 0);
  virtual ~Shape();

  virtual void print(std::ostream &) const = 0;
  friend std::ostream &operator<<(std::ostream &, const Shape &);

  virtual void operator+(const Point &) = 0;
};

#endif
