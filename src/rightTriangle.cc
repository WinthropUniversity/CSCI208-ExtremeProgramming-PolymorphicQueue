// Right triangle source file
#include <RightTriangle.h>
#include <iostream>
#include <cmath> // Necessary for sqrt() and pow() functions
using namespace std;

void RightTriangle::SetPerimeter(triangleBase, triangleHeight) {
  perimeter = triangleBase + triangleHeight + sqrt(pow(triangleBase,2) + pow(triangleHeight,2));
}

double RightTriangle::GetPerimeter() {
  return perimeter;
}
