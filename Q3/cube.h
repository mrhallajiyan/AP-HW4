#ifndef CUBE_H
#define CUBE_H

#include"ThreeDimensionalShape.h"

class Cube : public ThreeDimensionalShape
{
public:
  double sideLen, centerX, centerY, centerZ;

public:
  Cube();
  virtual ~Cube();
  Cube(double sideLen_, double centerX_ = 0, double centerY_ = 0, double centerZ_ = 0);

  double volume() const override final;
  double area() const override final;
  void print(std::ostream &) const override final;

  virtual void operator+(const Point &) override final;
};

#endif
