#ifndef EQUITRI_
#define EQUITRI_

#include <iostream>
#include "Triangle.h"
using namespace std;

class EquilateralTriangle : public Triangle {
	public:
	  EquilateralTriangle(double inBase, double inHeight);
	  virtual double GetPerimeter() const;
};

#endif
