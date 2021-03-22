#include "EquilateralTriangle.h"
#include <iostream>
using namespace std;

double EquilateralTriangle::getPerimeter(){
	double perimeter;
	perimeter = GetBase() * 3;
	return(perimeter);
}
