#include<SemiCircle.h>

#define PI 3.141592653589

/**
 * Constructor for the semicircle shape.
 *  @param inRadius The radius with which to set the shape
 **/
SemiCircle::SemiCircle(double inRadius) : Circle(inRadius) {
  shapeName_ = "SemiCircle";
  CheckRadiusValidity(inRadius);
  radius_ = inRadius;
}

/**
 * Return the area of this semicircle shape.
 *  @return The area as a double
 **/
double SemiCircle::GetArea() const {
  return Circle::GetArea() / 2.0;
}

/**
 * Return the perimeter of this semicircle shape.
 *  @return The perimeter as a double
 **/
double SemiCircle::GetPerimeter() const {
  return (Circle::GetPerimeter() / 2.0) + (2.0 * GetRadius());
}