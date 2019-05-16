#ifndef THREEDIMENSIONALSHAPE_H
#define THREEDIMENSIONALSHAPE_H
#include"Shape.h"

class ThreeDimensionalShape : public Shape
{
private:
public:
  ThreeDimensionalShape();
  virtual ~ThreeDimensionalShape();

  virtual double volume() const = 0;
  virtual double area() const = 0;
  virtual void print(std::ostream &) const override = 0;

  virtual void operator+(const CPoint &) override = 0;
};

#endif
