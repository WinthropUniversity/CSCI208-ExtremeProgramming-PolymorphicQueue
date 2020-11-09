#include <iostream>
#include <string>
#include <Circle.h>
#define PI 3.141592653589


//Constructor
Circle::Circle(){

  radius_ = 0.0;
}

//Accessor Methods
void Circle::AskUserForShapeParameters() {
  //Get the circle's radius
  cout << "What is your circle's radius? ";
  double userRadius;
  cin >>  userRadius;
  this->SetRadius(userRadius);

  //Get the circle's color
  cout << "What is your circle's color? ";
  string circleColor;
  cin >> circleColor;
  this->SetColor(circleColor);
}


void Circle::SetRadius(double radius) {
  radius_ = radius;

  if (radius_ < 0) {
	radius_ = radius_ * -1.0;
  }
}


double Circle::GetRadius() {
  return radius_;
}


double Circle::GetArea() {
  return radius_ * radius_ * PI;
}


double Circle::GetPerimeter() {
  return 2.0 * PI * radius_;
}


void Circle::PrintShapeInfo() {
  cout << "  Shape: Circle" << endl;
  cout << "  Color " << this->GetColor() << endl;
  cout << "  Radius: " << this->GetRadius() << endl;
  cout << "  Area: " << this->GetArea() << endl;
  cout << "  Perimeter: " << this->GetPerimeter() << endl;
}
