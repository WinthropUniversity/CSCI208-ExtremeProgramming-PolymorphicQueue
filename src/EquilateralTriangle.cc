#include "EquilateralTriangle.h"
#include <iostream>
using namespace std;

EquilateralTriangle::EquilateralTriangle(double inBase, double inHeight) : Triangle(inBase, inHeight) {
	shapeName_ = "EquilateralTriangle";
}

double EquilateralTriangle::GetPerimeter() const{
	double perimeter;
	perimeter = GetBase() * 3;
	return(perimeter);
}
