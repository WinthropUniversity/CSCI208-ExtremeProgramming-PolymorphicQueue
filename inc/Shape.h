#ifndef SHAPE_H
#define SHAPE_H
#include <string>

using namespace std;

class Shape {

public:

  // Default constructor

  Shape() {
    color = "gray";
  }

  // Gets color

  string GetColor() {
    return color;
  }

  // SetColor will set color of shape

  string SetColor(string in_color) {
    color = in_color;
  }

  // To be inherited into other classes

  virtual double GetArea() = 0;
  virtual double GetPerimeter() = 0;
  virtual void AskUserForShapeParameters() = 0;
  virtual void PrintShapeInfo() = 0;


protected:

  string color;
};





#endif
