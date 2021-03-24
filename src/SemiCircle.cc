//this is SemiCircle.cc

#include<SemiCircle.h>

#define PI 3.141592653589

SemiCircle::SemiCircle(double inRadius) : radius_(inRadius) {
  shapeName_ = "SemiCircle";
}

double SemiCircle::GetArea() const {
  return radius_ * radius_ * PI;
}

double SemiCircle::GetPerimeter() const {
  return 2.0* radius_ * PI;
}