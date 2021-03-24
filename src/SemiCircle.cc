#include<SemiCircle.h>

#define PI 3.141592653589

SemiCircle::SemiCircle(double inRadius) : Circle(inRadius) {
  shapeName_ = "SemiCircle";
}

virtual double SemiCircle::GetArea() const {
  return Circle::GetArea() / 2.0;
}

virtual double SemiCircle::GetPerimeter() const {
  return (Circle::GetPerimeter() / 2.0) + (2.0 * radius_);
}