#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H
#include"Shape.h"

class TwoDimensionalShape : public Shape
{
private:
public:
  TwoDimensionalShape();
  virtual ~TwoDimensionalShape();

  virtual double area() const = 0;
  virtual void print(std::ostream &) const override = 0;

  virtual void operator+(const CPoint &) override = 0;
};

#endif
