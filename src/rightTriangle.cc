// Right triangle source file
#include <RightTriangle.h>
#include <iostream>
#include <cmath> // Necessary for sqrt() and pow() functions
using namespace std;

double RightTriangle::GetPerimeter(triangleBase, triangleHeight) { // Calculates and returns perimeter given a base and height
  perimeter = triangleBase + triangleHeight + sqrt(pow(triangleBase,2) + pow(triangleHeight,2)); // Perimeter formula for right triangles
  return perimeter; // Perimeter is returned when function is called
}
