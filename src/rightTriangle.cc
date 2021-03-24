// Right triangle source file
#include <RightTriangle.h>
#include <iostream>
#include <cmath> // Necessary for sqrt() and pow() functions
using namespace std;

RightTriangle::RightTriangle(double inBase, inHeight) : base(inBase), height(inHeight) { // Constructor for shape name
  shapeName_ = "Right Triangle"; // RightTriangle knows what shape it is
}

double RightTriangle::GetPerimeter() const { // Calculates and returns perimeter given a base and height
  return base + height + sqrt(pow(base, 2) + pow(height, 2)); // Returns perimeter for a right triangle
}
