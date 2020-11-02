#include <iostream>
#include <Circle.h>
#include <cmath>

using namespace std;

void Circle::Circle(double radius){


}

void Circle::SetRadius(double radius) {
  radius_ = radius;
}

double Circle::GetRadius() {
  return radius_;
}

double Circle::GetArea() {

  return PI * pow(radius_, 2.0); 
}

double Circle::GetPerimeter() {

  return 2 * PI * radius_;
}
