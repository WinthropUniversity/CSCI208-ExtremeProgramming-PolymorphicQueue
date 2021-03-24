// Right triangle header file
#ifndef RIGHTTRIANGLE_H_
#define RIGHTTRIANGLE_H_

#include <Triangle.h> // Use base class header file

class RightTriangle : public Triangle { // RightTriangle inherits from Triangle
  public:
    RightTriangle(double inBase, double inHeight); // Constructor
    virtual double GetPerimeter() const; // Declare method
}

#endif
