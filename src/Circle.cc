//this is Circle.cc

#include<Circle.h>
#include<stdlib.h>

#define PI 3.141592653589

/**
 * Constructor for the circle shape.
 *  @param inRadius The radius with which to set the shape
 **/
Circle::Circle(double inRadius) {
  shapeName_ = "Circle";
  CheckRadiusValidity(inRadius);
  radius_ = inRadius;
}

/**
 * Return the area of this circle shape.
 *  @return The area as a double
 **/
virtual double Circle::GetArea() const {
  return radius_ * radius_ * PI;
}

/**
 * Return the perimeter of this circle shape.
 *  @return The perimeter as a double
 **/
virtual double Circle::GetPerimeter() const {
  return 2.0* radius_ * PI;
}

/**
 * This is called from the external-facing Print()
 * method and simple outputs the parameters specific
 * to this shape.
 **/
void Circle::PrintParamLine() const {
  cout << "    Radius=" << radius_ << endl;
}

virtual void CheckRadiusValidity(double radius) const {
  if (radius <= 0){
    cerr << "Error Code 42069: Radius must be greater than 0" << endl;
    exit(42069);
  }
}