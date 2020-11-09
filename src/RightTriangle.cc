#include <RightTriangle.h>
#include <cmath>

// To-Do: Complete functions for body file
using namespace std;

RightTriangle::RightTriangle() : base(0.0), height(0.0) {}


double RightTriangle::GetBase() {
	return base; 
}


double RightTriangle::SetBase(double inBase) {
	base = inBase; 
}


double RightTriangle::GetHeight() {
	return height; 
}


double RightTriangle::SetHeight(double inHeight) {
	height = inHeight; 
}


double RightTriangle::GetArea() {
  return 0.5 * base * height;
}


double RightTriangle::GetPerimeter() {
  double hyp = sqrt(base*base + height*height);
  return (base + height + hyp);
}


void RightTriangle::PrintShapeInfo() {
  cout << "Shape: Right Triangle" << endl;
  cout << "Base: " << this->GetBase() << endl;
  cout << "Height: " << this->GetArea() << endl;
  cout << "Area: " << this->GetArea() << endl;
  cout << "Perimeter: " << this->GetPerimeter() << endl;
}


void RightTriangle::AskUserForShapeParameters() {
  cout << "What is the base of the triangle?" << endl;
  double inBase;
  cin >> inBase;
  this->SetBase(inBase);
  cout << "What is the height of the triangle?" << endl;
  double inHeight;
  cin >> inHeight;
  this->SetHeight(inHeight);
}
