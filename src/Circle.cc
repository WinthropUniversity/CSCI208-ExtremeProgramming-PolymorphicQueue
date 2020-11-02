#include <iostream>
#include <Circle.h>


using namespace std;

void Circle::Circle(double radius){

  radius_ = radius;
}

/* void Circle::SetRadius(double radius) {
  radius_ = radius;
} */

double Circle::GetRadius() {
  return radius_;
}

double Circle::GetArea() const {

  return radius_ * radius_ * PI; 
}

double Circle::GetPerimeter() const {

  return 2 * PI * radius_;
}
