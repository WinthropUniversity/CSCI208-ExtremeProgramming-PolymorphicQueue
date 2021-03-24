#include "EquilateralTriangle.h"
#include <iostream>
using namespace std;

EquilateralTriangle::EquilateralTriangle(double inBase, double inHeight):base(inBase):height(inHeight){
	  shapeName_ = "EquilateralTriangle";
}

double EquilateralTriangle::GetPerimeter(){
	double perimeter;
	perimeter = GetBase() * 3;
	return(perimeter);
}
